/* @(#)bzero.s	4.1 12/15/82 */
/* bzero(base, length) */

#include "DEFS.h"

ENTRY(bzero)
	movc5	$0, (r0), $0, 8(ap), *4(ap)
	ret
