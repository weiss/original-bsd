#	@(#)Makefile	8.1 (Berkeley) 06/05/93

FILES=	README connectives propernames web2 web2a words
NOOBJ=	noobj

all clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${FILES} \
	    ${DESTDIR}${BINDIR}/dict

.include <bsd.prog.mk>
