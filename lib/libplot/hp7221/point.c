#ifndef lint
static char sccsid[] = "@(#)point.c	4.1 (Berkeley) 11/10/83";
#endif

#include "hp7221.h"

point(xi,yi)
int xi,yi;
{
	if(scaleX(xi)!=currentx || scaleY(yi)!=currenty)
		move(xi,yi);
	cont(xi, yi);
}
