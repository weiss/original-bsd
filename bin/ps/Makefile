#	@(#)Makefile	5.6 (Berkeley) 11/04/91

PROG=	ps
SRCS=	devname.c keyword.c nlist.c print.c ps.c
DPADD=	${LIBMATH} ${LIBUTIL}
LDADD=	-lm -lutil
BINGRP=	kmem
BINMODE=2555

.include <bsd.prog.mk>
