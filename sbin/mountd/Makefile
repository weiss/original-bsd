#	@(#)Makefile	5.2 (Berkeley) 05/11/90

PROG=	mountd
CFLAGS+=-DNFS
MAN8=	mountd.0
DPADD=	${LIBRPC}
LDADD=	-lrpc

.include <bsd.prog.mk>
