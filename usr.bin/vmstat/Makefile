#	@(#)Makefile	5.6 (Berkeley) 04/23/91

PROG=	vmstat
CFLAGS+=-I/sys
BINGRP=	kmem
BINMODE=2555
DPADD=	names.c ${LIBUTIL}
LDADD=	-lutil

.include <bsd.prog.mk>
