#ifndef lint
static char sccsid[] = "@(#)cont.c	4.1 (Berkeley) 11/10/83";
#endif

#include "hp7221.h"

cont(xi,yi)
int xi,yi;
{
	currentx = scaleX(xi);
	currenty = scaleY(yi);
	putchar( 'q' );
	putMBP( currentx, currenty );
}
