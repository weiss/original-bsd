/*
 * Copyright (c) 1988 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)atof.c	5.3 (Berkeley) 01/08/93";
#endif /* LIBC_SCCS and not lint */

#include <stdlib.h>
#include <stddef.h>

double
atof(ascii)
	const char *ascii;
{
	return (strtod(ascii, NULL));
}
