/* @(#)fputc.c	4.2 (Berkeley) 02/13/85 */
#include <stdio.h>

fputc(c, fp)
register FILE *fp;
{
	return(putc(c, fp));
}
