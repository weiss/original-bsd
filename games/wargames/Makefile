#	@(#)Makefile	5.2 (Berkeley) 05/11/90

all wargames clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} wargames.sh \
	    ${DESTDIR}/usr/games/wargames

.include <bsd.own.mk>
