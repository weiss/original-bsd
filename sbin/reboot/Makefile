#	@(#)Makefile	5.3 (Berkeley) 05/11/90

PROG=	reboot
NOMAN=	noman
DPADD=	${LIBUTIL}
LDADD=	-lutil

all: vax.reboot.0 tahoe.reboot.0

beforeinstall:
	install -c -o ${MANOWN} -g ${MANGRP} -m ${MANMODE} vax.reboot.0 \
	    ${DESTDIR}${MANDIR}8/vax
	install -c -o ${MANOWN} -g ${MANGRP} -m ${MANMODE} tahoe.reboot.0 \
	    ${DESTDIR}${MANDIR}8/tahoe

.include <bsd.own.mk>
.include <bsd.prog.mk>
