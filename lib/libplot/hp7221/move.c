#ifndef lint
static char sccsid[] = "@(#)move.c	4.1 (Berkeley) 11/10/83";
#endif

#include "hp7221.h"

move(xi,yi)
int xi,yi;
{
	currentx = scaleX(xi);
	currenty = scaleY(yi);
	putchar( 'p' );
	putMBP( currentx, currenty );
}
