#	@(#)Makefile	5.2 (Berkeley) 05/09/90

FILES=	ascii birthday eqnchar greek inter.phone man.template na.phone \
	noredist.c operator redist.c redist.man redist.sh

all clean cleandir depend lint tags:

install:
	cd ${.CURDIR}; install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${FILES} \
	    ${DESTDIR}${BINDIR}/misc

.include <bsd.own.mk>
