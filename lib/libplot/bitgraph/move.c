#ifndef lint
static char sccsid[] = "@(#)move.c	4.1 (Berkeley) 11/10/83";
#endif

#include "bg.h"

move(xi,yi)
int xi,yi;
{
	currentx = scaleX(xi);
	currenty = scaleY(yi);
	putchar( ESC );
	printf(":%d;%dm", currentx, currenty);
}
