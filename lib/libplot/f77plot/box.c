#ifndef lint
static char sccsid[] = "@(#)box.c	1.1 (Berkeley) 01/02/85";
#endif
box_(x0, y0, x1, y1)
int *x0, *y0, *x1, *y1;
{
	box(*x0, *y0, *x1, *y1);
}
