/*-
 * Copyright (c) 1992 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
	.asciz "@(#)umulsi3.s	5.1 (Berkeley) 07/19/92"
#endif /* LIBC_SCCS and not lint */

#include "DEFS.h"

ENTRY(__umulsi3, 0)
	emul	8(fp),4(fp),$0,r0
	movl	r1,r0
	ret
