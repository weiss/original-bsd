#	@(#)Makefile.inc	5.2 (Berkeley) 05/31/93

CFLAGS+=-I/sys
SRCS+=	isinf.c
SRCS+=	_setjmp.s alloca.s fabs.s ldexp.s modf.s setjmp.s
SRCS+=	udiv.s urem.s
