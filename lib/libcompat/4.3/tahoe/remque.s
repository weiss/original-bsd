#ifdef LIBC_SCCS
	.asciz	"@(#)remque.s	1.1 (Berkeley/CCI) 08/01/86"
#endif LIBC_SCCS

/* remque(entry) */

#include "DEFS.h"

ENTRY(remque, 0)
	remque	*4(fp)
	ret
