#	@(#)Makefile	5.1 (Berkeley) 06/25/90

PROG=	ext_srvtab
CFLAGS+=-DKERBEROS -I${.CURDIR}/../include
DPADD=	${LIBKDB} ${LIBKRB} ${LIBDES}
LDADD=	-lkdb -lkrb -ldes
NOMAN=	noman

.include <bsd.prog.mk>
