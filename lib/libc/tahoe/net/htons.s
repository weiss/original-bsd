#ifdef LIBC_SCCS
	.asciz	"@(#)htons.s	1.1 (Berkeley/CCI) 07/02/86"
#endif LIBC_SCCS

/* hostorder = htons(netorder) */

#include "DEFS.h"

ENTRY(htons)
	movzwl	6(fp),r0
	ret
