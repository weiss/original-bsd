#	@(#)Makefile	4.8 (Berkeley) 05/31/90

SUBDIR=	compact uncompact

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} ccat.sh \
	    ${DESTDIR}${BINDIR}/ccat

.include "../Makefile.inc"
.include <bsd.own.mk>
.include <bsd.subdir.mk>
