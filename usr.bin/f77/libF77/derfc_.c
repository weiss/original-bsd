/*-
 * Copyright (c) 1980 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)derfc_.c	5.2 (Berkeley) 04/12/91";
#endif /* not lint */

double derfc_(x)
double *x;
{
double erfc();

return( erfc(*x) );
}
