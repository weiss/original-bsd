#	@(#)Makefile	5.6 (Berkeley) 04/27/93

PROG=	lpd
CFLAGS+=-I${.CURDIR}/../common_source
MAN8=	lpd.0
SRCS=	lpd.c printjob.c recvjob.c displayq.c rmjob.c startdaemon.c \
	lpdchar.c common.c
.PATH:	${.CURDIR}/../common_source

.include "../../Makefile.inc"
.include <bsd.prog.mk>
