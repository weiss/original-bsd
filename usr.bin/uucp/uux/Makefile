#	@(#)Makefile	8.1 (Berkeley) 06/06/93

PROG=	uux
CFLAGS+=-I${.CURDIR}/../includes
BINMODE=6555
DPADD=	${LIBCOMPAT}
LDADD=	${LIBUU} -lcompat

.include <bsd.prog.mk>
