#	@(#)Makefile	5.1 (Berkeley) 05/24/90

MAKEHOSTS all clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m ${BINMODE} \
	    MAKEHOSTS.sh ${DESTDIR}${BINDIR}/MAKEHOSTS

.include <bsd.prog.mk>
