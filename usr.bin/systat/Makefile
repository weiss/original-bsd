#	@(#)Makefile	5.13 (Berkeley) 04/27/93

PROG=	systat
CFLAGS+=-I/sys -I${.CURDIR}/../vmstat
SRCS=	cmds.c cmdtab.c disks.c fetch.c iostat.c keyboard.c vmstat.c main.c \
	mbufs.c netcmds.c netstat.c pigs.c swap.c devname.c
.PATH:	${.CURDIR}/../../bin/ps
LDADD=	-lcurses -ltermcap -lm -lkvm
DPADD=	${LIBCURSES} ${LIBTERMCAP} ${LIBM}
BINGRP=	kmem
BINMODE=2555

.include <bsd.prog.mk>
