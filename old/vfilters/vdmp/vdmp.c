/*  VDMP: version 4.6				updated 05/16/83
 *
 *  reads raster file created by cifplot and dumps it onto the
 *  Varian or Versatec plotter.
 *  Assumptions:
 *	Input is from device 0.
 *	plotter is already opened as device 1.
 *	error output file is device 2.
 */
#include <stdio.h>
#include <sys/vcmd.h>

#define MAGIC_WORD	0xA5CF4DFA

#define BUFSIZE		1024*128
#define BLOCK		1024

static char *Sid = "@(#)vdmp.c	4.2\t5/16/83";

int	plotmd[] = { VPLOT };
int	prtmd[]	= { VPRINT };

int	inbuf[BLOCK/sizeof(int)];
char	vpbuf[BUFSIZE];
int	lines;

int	varian;			/* 0 for versatec, 1 for varian. */
int	BYTES_PER_LINE;		/* number of bytes per raster line. */
int	PAGE_LINES;		/* number of raster lines per page. */

char	*name, *host, *acctfile;

main(argc, argv)
	int argc;
	char *argv[];
{
	register int n;

	while (--argc) {
		if (*(*++argv) == '-') {
			switch (argv[0][1]) {
			case 'x':
				BYTES_PER_LINE = atoi(&argv[0][2]) / 8;
				varian = BYTES_PER_LINE == 264;
				break;

			case 'y':
				PAGE_LINES = atoi(&argv[0][2]);
				break;

			case 'n':
				argc--;
				name = *++argv;
				break;

			case 'h':
				argc--;
				host = *++argv;
			}
		} else
			acctfile = *argv;
	}

	n = read(0, inbuf, BLOCK);
	if (inbuf[0] == MAGIC_WORD && n == BLOCK) {
		/* we have a formatted dump file */
		inbuf[(BLOCK/sizeof(int))-1] = 0;  /* make sure string terminates */
		ioctl(1, VSETSTATE, prtmd);
		write(1, &inbuf[4], (strlen(&inbuf[4])+1) & ~1);
		write(1, "\n", 2);
	} else				/* dump file not formatted */
		lseek(0, 0L, 0);	/* reset in's seek pointer and plot */

	n = putplot();

	/* page feed */
	ioctl(1, VSETSTATE, prtmd);
	if (varian) 
		write(1, "\f", 2);
	else
		write(1, "\n\n\n\n\n", 6);
	account(name, host, acctfile);
	exit(n != 0);
}

putplot()
{
	register char *buf;
	register int i, n;

	n = 0;
	buf = vpbuf;
	ioctl(1, VSETSTATE, plotmd);
	while ((i = read(0, buf, BUFSIZE)) > 0)
		if (write(1, buf, i) != i) {
			i = -1;
			break;
		} else
			n += BUFSIZE;
	lines += n / BYTES_PER_LINE;
	return(i);
}

account(who, from, acctfile)
	char *who, *from, *acctfile;
{
	register FILE *a;

	if (who == NULL || acctfile == NULL)
		return;
	if (access(acctfile, 02) || (a = fopen(acctfile, "a")) == NULL)
		return;
	/*
	 * Varian accounting is done by 11 inch pages;
	 * Versatec accounting is by the (12 inch) foot.
	 */
	fprintf(a, "t%6.2f\t", (lines / 200.0) / PAGE_LINES);
	if (from != NULL)
		fprintf(a, "%s:", from);
	fprintf(a, "%s\n", who);
	fclose(a);
}
