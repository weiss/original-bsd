#ifndef lint
static char sccsid[] = "@(#)line.c	1.1 (Berkeley) 01/02/85";
#endif

line(x0,y0,x1,y1){
	move(x0,y0);
	cont(x1,y1);
}
