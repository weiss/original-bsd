#ifndef lint
static char sccsid[] = "@(#)circle.c	4.1 (Berkeley) 11/10/83";
#endif

circle (xc,yc,r)
int xc,yc,r;
{
	arc(xc,yc, xc+r,yc, xc-r,yc);
	arc(xc,yc, xc-r,yc, xc+r,yc);
}
