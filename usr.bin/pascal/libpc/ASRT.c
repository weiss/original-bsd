/*-
 * Copyright (c) 1979, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
static char sccsid[] = "@(#)ASRT.c	8.1 (Berkeley) 06/06/93";
#endif /* not lint */

char EASRT[] = "Assertion failed\n";

ASRT(cond)
	short	cond;
{
	if (cond)
		return;
	ERROR(EASRT, 0);
	return;
}
