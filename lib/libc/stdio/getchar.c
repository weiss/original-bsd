#ifndef lint
static char sccsid[] = "@(#)getchar.c	5.1 (Berkeley) 06/05/85";
#endif not lint

/*
 * A subroutine version of the macro getchar.
 */
#include <stdio.h>

#undef getchar

getchar()
{
	return(getc(stdin));
}
