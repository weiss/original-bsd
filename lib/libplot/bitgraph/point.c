#ifndef lint
static char sccsid[] = "@(#)point.c	4.1 (Berkeley) 11/10/83";
#endif

point(xi, yi)
int xi, yi;
{
	move(xi, yi);
	label(".");
}
