/*
 * Copyright (c) 1980 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 *
 *	@(#)r_sqrt.c	5.2	07/08/85
 */

float r_sqrt(x)
float *x;
{
double sqrt();
return( sqrt(*x) );
}
