#	@(#)Makefile	5.6 (Berkeley) 04/27/93

PROG=	mountd
CFLAGS+=-DNFS
MAN5=	exports.0 netgroup.0
MAN8=	mountd.0
DPADD=	${LIBRPC}
LDADD=	-lrpc

.include <bsd.prog.mk>
