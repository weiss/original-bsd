#ifdef LIBC_SCCS
	.asciz	"@(#)ntohs.s	1.1 (Berkeley/CCI) 07/02/86"
#endif LIBC_SCCS

/* hostorder = ntohs(netorder) */

#include "DEFS.h"

ENTRY(ntohs)
	movzwl	6(fp),r0
	ret
