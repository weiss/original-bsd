#	@(#)Makefile	5.9 (Berkeley) 03/04/91

PROG=	systat
CFLAGS+=-I/sys
SRCS=	cmds.c cmdtab.c disks.c fetch.c iostat.c keyboard.c vmstat.c main.c \
	mbufs.c netcmds.c netstat.c pigs.c swap.c
LDADD=	-lcurses -ltermcap -lm -lutil -lcompat
DPADD=	${LIBCURSES} ${LIBTERMCAP} ${LIBM} ${LIBUTIL}
BINGRP=	kmem
BINMODE=2555

.include <bsd.prog.mk>
