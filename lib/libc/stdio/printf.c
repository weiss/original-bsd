#ifndef lint
static char sccsid[] = "@(#)printf.c	5.1 (Berkeley) 06/05/85";
#endif not lint

#include	<stdio.h>

printf(fmt, args)
char *fmt;
{
	_doprnt(fmt, &args, stdout);
	return(ferror(stdout)? EOF: 0);
}
