/*
 * Copyright (c) 1980 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 *
 *	@(#)d_cos.c	5.1	06/07/85
 */

double d_cos(x)
double *x;
{
double cos();
return( cos(*x) );
}
