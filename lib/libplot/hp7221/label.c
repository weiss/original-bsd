#ifndef lint
static char sccsid[] = "@(#)label.c	4.1 (Berkeley) 11/10/83";
#endif

#include "hp7221.h"

label(s)
char *s;
{
	printf("~'%s", s);
	putchar( ENDOFSTRING );
}
