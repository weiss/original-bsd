#	@(#)Makefile	5.15 (Berkeley) 05/27/92

PROG=	netstat
SRCS=	host.c inet.c if.c main.c mbuf.c route.c unix.c ns.c iso.c
BINGRP=	kmem
BINMODE=2555
LDADD=	-lkvm
DPADD=	${LIBKVM}

.include <bsd.prog.mk>
