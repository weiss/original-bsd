#	@(#)Makefile	5.6 (Berkeley) 06/08/90

LIST=	dirblk findproc.nxt frame pcb proc setproc.nxt trapframe
NOOBJ=	noobj

all clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${LIST} \
	    ${DESTDIR}/usr/libdata/adb

.include <bsd.prog.mk>
