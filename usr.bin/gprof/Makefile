#	@(#)Makefile	5.20 (Berkeley) 06/29/93

PROG=	gprof
SRCS=	gprof.c arcs.c dfn.c lookup.c ${MACHINE}.c hertz.c \
	printgprof.c printlist.c

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 \
	    ${.CURDIR}/gprof.flat ${.CURDIR}/gprof.callg \
	    ${DESTDIR}/usr/share/misc

.include <bsd.prog.mk>
