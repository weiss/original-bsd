#	@(#)Makefile	5.7 (Berkeley) 06/04/93

PROG=	pstat
CFLAGS+=-I/sys
BINGRP=	kmem
BINMODE=2555
DPADD=	${LIBKVM}
LDADD=	-lkvm

.include <bsd.prog.mk>
