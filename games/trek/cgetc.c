#ifndef lint
static char sccsid[] = "@(#)cgetc.c	1.1	(Berkeley) 05/27/83";
#endif not lint

# include	<stdio.h>

char	cgetc(i)
int	i;
{
	return ( getchar() );
}
