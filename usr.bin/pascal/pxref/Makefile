#	@(#)Makefile	5.2 (Berkeley) 07/03/90

MAN1=	pxref.0

all: pxref ${MAN1}

lint depend:

clean cleandir:
	rm -f pxref pxref.o ${MAN1}

pxref: pxref.p
	pc -w ${.CURDIR}/pxref.p -o ${.TARGET}

beforeinstall:
	install ${STRIP} -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} pxref \
	    ${DESTDIR}/usr/bin

.include <bsd.prog.mk>
