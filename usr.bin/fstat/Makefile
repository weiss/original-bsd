#	@(#)Makefile	5.10 (Berkeley) 06/02/93

PROG=	fstat
CFLAGS+=-I/sys
DPADD=	${LIBKVM}
LDADD=	-lkvm
BINGRP=	kmem
BINMODE=2555

.include <bsd.prog.mk>
