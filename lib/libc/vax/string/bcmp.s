/* @(#)bcmp.s	4.1 12/15/82 */
/* bcmp(s1, s2, n) */

#include "DEFS.h"

ENTRY(bcmp)
	cmpc3	12(ap), *4(ap), *8(ap)
	ret
