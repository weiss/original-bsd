/*-
 * Copyright (c) 1979 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
static char sccsid[] = "@(#)ASRT.c	1.4 (Berkeley) 04/09/90";
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
