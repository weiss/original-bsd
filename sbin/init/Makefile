#	@(#)Makefile	5.6 (Berkeley) 07/19/93

PROG=	init
MAN8=	init.0
DPADD=	${LIBUTIL}
LDADD=	-lutil
BINMODE=500
INSTALLFLAGS=-fschg
CFLAGS+=-DDEBUGSHELL -DSECURE

.include <bsd.prog.mk>
