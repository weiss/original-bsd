/*-
 * Copyright (c) 1980 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)r_acos.c	5.3 (Berkeley) 04/12/91";
#endif /* not lint */

float r_acos(x)
float *x;
{
double acos();
return( acos(*x) );
}
