#	@(#)Makefile	5.1 (Berkeley) 05/03/91

PROG=	rm
SRCS=	rm.c
CFLAGS+=-DLETS_GET_SMALL
LDADD=	-lutil
DPADD=	${LIBUTIL}
NOMAN=	noman
LDFLAGS=-N
.PATH:	${.CURDIR}/../../../../bin/rm

.include <bsd.prog.mk>
