#	@(#)Makefile	5.2 (Berkeley) 04/27/93

PROG=	ls
SRCS=	cmp.c ls.c print.c util.c
CFLAGS+=-DLETS_GET_SMALL
NOMAN=	noman
LDFLAGS=-N
.PATH:	${.CURDIR}/../../../../bin/ls

.include <bsd.prog.mk>
