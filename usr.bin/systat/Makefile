#	@(#)Makefile	5.11 (Berkeley) 07/23/92

PROG=	systat
CFLAGS+=-I/sys
SRCS=	cmds.c cmdtab.c disks.c fetch.c iostat.c keyboard.c vmstat.c main.c \
	mbufs.c netcmds.c netstat.c pigs.c swap.c devname.c
.PATH:	${.CURDIR}/../../bin/ps
LDADD=	-lcurses -ltermcap -lm -lkvm -lutil
DPADD=	${LIBCURSES} ${LIBTERMCAP} ${LIBM} ${LIBUTIL}
BINGRP=	kmem
BINMODE=2555

.include <bsd.prog.mk>
