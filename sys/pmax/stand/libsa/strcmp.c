/*-
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Ralph Campbell.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)strcmp.c	8.1 (Berkeley) 06/10/93
 */

#include <pmax/stand/dec_prom.h>

strcmp(s1, s2)
	char *s1, *s2;
{
	return (callv->strcmp(s1, s2));
}
