#	@(#)Makefile	5.1 (Berkeley) 05/11/90

PROG=	diction
BINDIR=	/usr/libexec
MLINKS=	diction.1 explain.1

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 \
	    ${.CURDIR}/dict.d ${DESTDIR}/usr/share/dict
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/diction.sh ${DESTDIR}/usr/bin/diction

.include "../../Makefile.inc"
.include <bsd.prog.mk>
