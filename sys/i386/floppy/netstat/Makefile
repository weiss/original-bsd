#	@(#)Makefile	5.2 (Berkeley) 04/27/93

PROG=	netstat
SRCS=	host.c inet.c if.c main.c mbuf.c route.c unix.c ns.c iso.c
CFLAGS+=-DLETS_GET_SMALL
BINGRP=	kmem
BINMODE=2555
NOMAN=	noman
LDFLAGS=-N
.PATH:	${.CURDIR}/../../../../usr.bin/netstat

.include <bsd.prog.mk>
