#	@(#)Makefile	5.3 (Berkeley) 05/11/90

MAN1=	which.0

all: ${MAN1}

which clean cleandir depend lint tags:

install: maninstall
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    ${.CURDIR}/which.csh ${DESTDIR}${BINDIR}/which

.include <bsd.prog.mk>
