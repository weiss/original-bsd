/*-
 * Copyright (c) 1979, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
static char sccsid[] = "@(#)TRUNC.c	8.1 (Berkeley) 06/06/93";
#endif /* not lint */

long
TRUNC(value)

	double	value;
{
	return (long)(value);
}
