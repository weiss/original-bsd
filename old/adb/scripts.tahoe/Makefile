#	@(#)Makefile	5.5 (Berkeley) 05/11/90

LIST=	dirblk findproc.nxt frame pcb proc setproc.nxt trapframe

all clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${LIST} \
	    ${DESTDIR}/usr/libdata/adb

.include <bsd.own.mk>
