/*
 * Copyright (c) 1980 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 *
 *	@(#)erf_.c	5.1	06/07/85
 */

float erf_(x)
float *x;
{
double erf();

return( erf(*x) );
}
