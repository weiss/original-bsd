#	@(#)Makefile	1.29 (Berkeley) 06/05/90

SUBDIR=	lpass1 lpass2 llibs

beforeinstall:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/lint.sh ${DESTDIR}/usr/bin/lint

.include <bsd.own.mk>
.include <bsd.subdir.mk>
