#	@(#)Makefile	5.5 (Berkeley) 05/11/90

LIST=	dirblk dmcstats findproc.nxt frame ifuba ifubinfo ifxmt \
	mba_device mba_hd pcb proc setproc.nxt stacktrace trapframe \
	ubahd

all clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${LIST} \
	    ${DESTDIR}/usr/libdata/adb

.include <bsd.own.mk>
