#	@(#)Makefile	5.10 (Berkeley) 06/22/90

PROG=	htable
SRCS=	htable.c parse.c scan.c
MAN8=	htable.0
CFLAGS+=-I${.CURDIR}
CLEANFILES+=parse.c scan.c y.tab.h

.include <bsd.prog.mk>
