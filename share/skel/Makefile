#	@(#)Makefile	5.2 (Berkeley) 05/11/90

FILES=	dot.cshrc dot.login dot.mailrc dot.profile dot.rhosts

all clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${FILES} \
	    ${DESTDIR}${BINDIR}/skel

.include <bsd.own.mk>
