/*
 * Copyright (c) 1986 Regents of the University of California.
 * All rights reserved.
 *
 * This code is derived from software contributed to Berkeley by
 * Computer Consoles Inc.
 *
 * %sccs.include.redist.c%
 */

#if defined(SYSLIBC_SCCS) && !defined(lint)
	.asciz "@(#)fp_exp.s	1.3 (Berkeley) 06/01/90"
#endif /* SYSLIBC_SCCS and not lint */

#include <tahoemath/fp.h>
#include "DEFS.h"

/*
 * Reserved floating point operand.
 */
ASENTRY(fpresop, 0)
	movl	$0xaaaaaaaa,r0
	movl	$0xaaaaaaaa,r1
	ret

/*
 * Floating point overflow.
 */
ASENTRY(fpover, 0)
	movl	$HUGE0,r0
	movl	$HUGE1,r1
	ret

/*
 * Floating point underflow.
 */
ASENTRY(fpunder, 0)
	clrl	r0
	clrl	r1
	ret

/*
 * Floating point division by zero.
 */
ASENTRY(fpzdiv, 0)
	divl2	$0,r1		# force division by zero.
	ret
