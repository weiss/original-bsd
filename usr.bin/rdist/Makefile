#	@(#)Makefile	8.2 (Berkeley) 07/19/93

PROG=	rdist
CFLAGS+=-I${.CURDIR}
SRCS=	docmd.c expand.c lookup.c main.c server.c
OBJS+=	gram.o
BINOWN=	root
BINMODE=4555
INSTALLFLAGS=-fschg
DPADD=	${LIBCOMPAT}
LDADD=	-lcompat
CLEANFILES=y.tab.h

.include <bsd.prog.mk>
