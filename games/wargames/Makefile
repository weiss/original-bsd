#	@(#)Makefile	5.3 (Berkeley) 06/08/90

NOOBJ=	noobj
all wargames clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} wargames.sh \
	    ${DESTDIR}/usr/games/wargames

.include <bsd.prog.mk>
