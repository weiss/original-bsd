#	@(#)Makefile	5.13 (Berkeley) 05/11/90

PROG=	boggle
MAN6=	boggle.0
DPADD=	${LIBCOMPAT}
LDADD=	-lcompat
HIDEGAME=hidegame

all: bogdict

bogdict: /usr/share/dict/words comp sfile
	sed -f ${.CURDIR}/sfile /usr/share/dict/words | uniq | ./comp >bogdict

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 bogdict \
	    ${DESTDIR}/usr/share/games
comp:
	${CC} -O ${.CURDIR}/comp.c -o ${.TARGET}

.include <bsd.prog.mk>
