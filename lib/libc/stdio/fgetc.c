#ifndef lint
static char sccsid[] = "@(#)fgetc.c	5.1 (Berkeley) 06/05/85";
#endif not lint

#include <stdio.h>

fgetc(fp)
FILE *fp;
{
	return(getc(fp));
}
