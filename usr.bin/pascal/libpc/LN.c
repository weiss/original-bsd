/*-
 * Copyright (c) 1979, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
static char sccsid[] = "@(#)LN.c	8.1 (Berkeley) 06/06/93";
#endif /* not lint */

#include <math.h>

double
LN(value)

	double	value;
{
	if (value <= 0) {
		ERROR("Non-positive argument of %e to ln\n", value);
	}
	return log(value);
}
