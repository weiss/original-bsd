#ifndef lint
static char sccsid[] = "@(#)arc.c	1.1 (Berkeley) 01/02/85";
#endif
arc_(x,y,x0,y0,x1,y1)
int *x, *y, *x0, *y0, *x1, *y1;
{
	arc(*x, *y, *x0, *y0, *x1, *y1);
}
