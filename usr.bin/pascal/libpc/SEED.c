/*-
 * Copyright (c) 1979, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
static char sccsid[] = "@(#)SEED.c	8.1 (Berkeley) 06/06/93";
#endif /* not lint */

#include "h00vars.h"

long
SEED(value)
	long value;
{
	long tmp;

	tmp = _seed;
	_seed = value;
	return tmp;
}
