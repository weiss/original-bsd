#	@(#)Makefile	5.17 (Berkeley) 07/14/92

PROG=	netstat
SRCS=	host.c if.c inet.c iso.c main.c mbuf.c mroute.c ns.c route.c \
	tp_astring.c unix.c
.PATH:	${.CURDIR}/../../sys/netiso
BINGRP=	kmem
BINMODE=2555
LDADD=	-lkvm
DPADD=	${LIBKVM}

.include <bsd.prog.mk>
