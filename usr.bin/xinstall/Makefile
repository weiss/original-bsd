#	@(#)Makefile	5.4 (Berkeley) 05/11/90

PROG=	xinstall
MAN1=	install.0

install: maninstall
	install ${STRIP} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${PROG} ${DESTDIR}${BINDIR}/install

.include <bsd.prog.mk>


