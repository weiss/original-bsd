#	@(#)Makefile	8.1 (Berkeley) 06/01/93

PROG=	make_keypair
MAN8=	make_keypair.0
CFLAGS+=-DKERBEROS -I${.CURDIR}/../register
DPADD=	${LIBKRB} ${LIBDES}
LDADD=	-lkdb -lkrb -ldes

.include <bsd.prog.mk>
