#	@(#)Makefile	5.5 (Berkeley) 07/01/90

MAN1=	which.0

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/which.csh ${DESTDIR}${BINDIR}/which

.include <bsd.prog.mk>
