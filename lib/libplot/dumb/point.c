#ifndef lint
static char sccsid[] = "@(#)point.c	4.1 (Berkeley) 11/10/83";
#endif

#include "dumb.h"

point(x, y)
	int x,y;
{
	scale(x, y);
	currentx = x;
	currenty = y;
	screenmat[currentx][currenty] = '*';
}
