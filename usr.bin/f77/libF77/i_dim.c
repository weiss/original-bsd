/*-
 * Copyright (c) 1980 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)i_dim.c	5.2 (Berkeley) 04/12/91";
#endif /* not lint */

long int i_dim(a,b)
long int *a, *b;
{
return( *a > *b ? *a - *b : 0);
}
