/*-
 * Copyright (c) 1980 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)dbesj1_.c	5.2 (Berkeley) 04/12/91";
#endif /* not lint */

double j1();

double dbesj1_(x)
double *x;
{
	return(j1(*x));
}
