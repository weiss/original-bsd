/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * William Jolitz.
 *
 * %sccs.include.redist.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
	.asciz "@(#)htons.s	5.1 (Berkeley) 04/23/90"
#endif /* LIBC_SCCS and not lint */

/* netorder = htons(hostorder) */

#include "DEFS.h"

ENTRY(htons)
	movzwl	4(sp),%eax
	xchg	%al,%ah
	ret
