#	@(#)Makefile	5.3 (Berkeley) 05/11/90

MSSRCS=	acc.ms cov.ms eqn.ms ref.ms tbl.ms ths.ms toc.ms
TMSRCS=	tmac.os tmac.s

all clean cleandir depend lint tags:

install:
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${MSSRCS} \
	    ${DESTDIR}${BINDIR}/ms
	install -c -o ${BINOWN} -g ${BINGRP} -m 444 ${TMSRCS} \
	    ${DESTDIR}${BINDIR}/tmac

.include <bsd.own.mk>
