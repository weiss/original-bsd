#ifndef lint
	.asciz	"@(#)fabs.s	5.1 (Berkeley) 06/05/85"
#endif not lint

/* fabs - floating absolute value */

#include "DEFS.h"

ENTRY(fabs, 0)
	movd	4(ap),r0
	bgeq	1f
	mnegd	r0,r0
1:
	ret
