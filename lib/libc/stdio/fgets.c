/* @(#)fgets.c	4.2 (Berkeley) 02/13/85 */
#include	<stdio.h>

char *
fgets(s, n, iop)
char *s;
register FILE *iop;
{
	register c;
	register char *cs;

	cs = s;
	while (--n>0 && (c = getc(iop)) != EOF) {
		*cs++ = c;
		if (c=='\n')
			break;
	}
	if (c == EOF && cs==s)
		return(NULL);
	*cs++ = '\0';
	return(s);
}
