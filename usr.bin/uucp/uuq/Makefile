#	@(#)Makefile	5.1 (Berkeley) 03/02/91

PROG=	uuq
CFLAGS+=-I${.CURDIR}/../includes
BINMODE=6555
DPADD=	${LIBCOMPAT}
LDADD=	${LIBUU} -lcompat

.include <bsd.prog.mk>
