#	@(#)Makefile	5.2 (Berkeley) 05/13/90

PROG=	lpr
CFLAGS+=-I${.CURDIR}/../common_source
SRCS=	lpr.c startdaemon.c printcap.c
BINOWN=	root
BINGRP=	daemon
BINMODE=6555
.PATH:	${.CURDIR}/../common_source

.include "../../Makefile.inc"
.include <bsd.prog.mk>
