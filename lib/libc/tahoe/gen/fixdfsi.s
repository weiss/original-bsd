/*-
 * Copyright (c) 1992 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
	.asciz "@(#)fixdfsi.s	5.1 (Berkeley) 07/19/92"
#endif /* LIBC_SCCS and not lint */

#include "DEFS.h"

ENTRY(__fixdfsi, 0)
	ldd	4(fp)
	cvdl	r0
	ret#1
