/*-
 * Copyright (c) 1992 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)skpc.c	7.1 (Berkeley) 06/20/92
 */

int
skpc(mask, size, cp)
	register unsigned char mask;
	unsigned int size;
	register unsigned char *cp;
{
	register unsigned char *end;

	for (end = &cp[size]; cp < end && *cp == mask; ++cp);
	return (end - cp);
}
