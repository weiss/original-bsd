#	@(#)Makefile.inc	5.1 (Berkeley) 06/26/92

CFLAGS+=-I/sys
SRCS+=	_setjmp.s alloca.s fabs.s ldexp.s modf.s setjmp.s
SRCS+=	udiv.s urem.s
