#	@(#)Makefile	5.2 (Berkeley) 03/16/92

all hpux-as clean cleandir depend lint obj tags:

install:
	install -c -o ${BINOWN} -o ${BINGRP} -m ${BINMODE} hpux-as \
	    ${DESTDIR}${BINDIR}

.include <bsd.prog.mk>
