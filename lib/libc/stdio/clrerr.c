/* @(#)clrerr.c	4.2 (Berkeley) 02/13/85 */
#include <stdio.h>
#undef	clearerr

clearerr(iop)
	register FILE *iop;
{
	iop->_flag &= ~(_IOERR|_IOEOF);
}
