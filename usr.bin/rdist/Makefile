#	@(#)Makefile	5.9 (Berkeley) 05/11/90

PROG=	rdist
CFLAGS+=-I${.CURDIR}
SRCS=	docmd.c expand.c lookup.c main.c server.c
OBJS+=	gram.o
BINOWN=	root
BINMODE=4555

.include <bsd.prog.mk>
