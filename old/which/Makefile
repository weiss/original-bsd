#	@(#)Makefile	5.4 (Berkeley) 05/24/90

MAN1=	which.0

all which: ${MAN1}

clean cleandir depend lint tags:

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/which.csh ${DESTDIR}${BINDIR}/which

.include <bsd.prog.mk>
