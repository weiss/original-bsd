/*-
 * Copyright (c) 1991 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Computer Consoles Inc.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)outstr_.c	5.2 (Berkeley) 04/12/91";
#endif /* not lint */

#include <stdio.h>

/* print a character string */
outstr_(s, n)
register char *s;
register long n;
{
while ( --n >= 0)
	putchar(*s++);
}
