/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)varargs.h	5.2 (Berkeley) 05/13/90
 */

#include <stdarg.h>

#undef	va_dcl
#define	va_dcl	int va_alist;

#undef	va_start
#define	va_start(ap) \
	ap = (char *)&va_alist
