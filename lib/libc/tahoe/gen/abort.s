#ifdef LIBC_SCCS
	.asciz	"@(#)abort.s	1.1 (Berkeley/CCI) 08/01/86"
#endif LIBC_SCCS

/* C library -- abort */

#include "DEFS.h"

ENTRY(abort, 0)
	rei
	clrl	r0
	ret
