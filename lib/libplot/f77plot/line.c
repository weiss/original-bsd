#ifndef lint
static char sccsid[] = "@(#)line.c	1.1 (Berkeley) 01/02/85";
#endif
line_(x0,y0,x1,y1)
int *x0, *y0, *x1, *y1;
{
	line(*x0,*y0,*x1,*y1);
}
