#ifndef lint
static char sccsid[] = "@(#)erase.c	4.1 (Berkeley) 11/10/83";
#endif

#include "bg.h"

erase()
{
	putchar( ESC );
	printf("[H");
	putchar( ESC );
	printf("[J");
}
