#	@(#)Makefile	8.1 (Berkeley) 06/04/93

PROG=	rbootd
SRCS=	bpf.c conf.c parseconf.c rbootd.c rmpproto.c utils.c
MAN8=	rbootd.0

afterinstall:
	(cd ${.CURDIR}/bootdir && install -c -o ${BINOWN} -g ${BINGRP} \
	    -m 444 * ${DESTDIR}/usr/mdec/)

.include <bsd.prog.mk>
