#ifndef lint
static char sccsid[] = "@(#)cont.c	4.1 (Berkeley) 11/11/83";
#endif

#include "gigi.h"

cont(xi,yi)
int xi,yi;
{
	currentx = xsc(xi);
	currenty = ysc(yi);
	printf("V[%d,%d]",currentx, currenty);
}
