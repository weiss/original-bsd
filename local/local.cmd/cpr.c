# include <stdio.h>
# include <sgtty.h>
# include <signal.h>

static char	SccsId[] =	"@(#)cpr.c	1.4		07/25/82";

/*
**  CPR -- print on concept 108
**
**	This filter arranges to output onto a printer connected
**	to a Concept 108 terminal.  It probably works on other
**	models in the Concept 100 series also.
**
**	Usage:
**		cpr [-f] [file ...]
**
**	Flags:
**		-f	form feed following to print.
*/

typedef char	bool;
#define TRUE	1
#define FALSE	0

struct sgttyb	tbuf;
int		SysLine;
bool		FormFeedFollowing;

main(argc, argv)
	int argc;
	char **argv;
{
	register char *p;
	extern cleanterm();
	extern char *getenv();

	/* arrange to stop the sysline program during printing */
	p = getenv("SYSLINE");
	if (p != NULL)
		SysLine = atoi(p);

	/* process arguments */
	while (--argc > 0)
	{
		p = *++argv;
		if (*p == '-')
		{
			switch (*++p)
			{
			  case 'f':
				FormFeedFollowing = TRUE;
				break;
			}
		}
	}

	/* be nice on interrupts, etc. */
	signal(SIGINT, cleanterm);

	/* set the terminal to output to printer */
	setupterm();

	/* print the appropriate files */
	if (argc < 2)
		copyfile();
	else
	{
		while (--argc > 0)
		{
			if (freopen(*++argv, "r", stdin) == NULL)
				perror(*argv);
			else
				copyfile();
		}
	}

	/* reset terminal to a nice state */
	cleanterm();
}

copyfile()
{
	char buf[200];
	while (fgets(buf, sizeof buf, stdin) != NULL)
		fputs(buf, stdout);
}

setupterm()
{
	int oldflags;

	if (gtty(1, &tbuf) < 0)
	{
		perror("cpr: stdout");
		exit(1);
	}
	oldflags = tbuf.sg_flags;
	tbuf.sg_flags &= ~ECHO;
	tbuf.sg_flags |= CBREAK;
	stty(1, &tbuf);
	tbuf.sg_flags = oldflags;
	if (SysLine > 0)
		kill(SysLine, SIGSTOP);
	fputs("\033Y$", stdout);
	if (getack() >= 0)
		return;
	fprintf(stderr, "Cannot attach printer\n");
	resetmodes();
	exit(1);
}

cleanterm()
{
	/* output trailing formfeed */
	if (FormFeedFollowing)
		fputs("\r\f", stdout);

	/* disconnect printer */
	printf("\033Y0");
	getack();
	fflush(stdout);

	/* back to the real world.... */
	resetmodes();
	exit(0);
}

getack()
{
	char buf[1];

	fflush(stdout);
	if (read(2, buf, 1) <= 0 || buf[0] != '\006')
		return (-1);
	return (0);
}

resetmodes()
{
	stty(1, &tbuf);
	if (SysLine > 0)
		kill(SysLine, SIGCONT);
}
