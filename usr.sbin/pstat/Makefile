#	@(#)Makefile	5.6 (Berkeley) 04/27/93

PROG=	pstat
CFLAGS+=-I/sys
SRCS=	pstat.c devname.c
.PATH:	${.CURDIR}/../../bin/ps
MAN8=	pstat.0
BINGRP=	kmem
BINMODE=2555
DPADD=	${LIBKVM}
LDADD=	-lkvm

.include <bsd.prog.mk>
