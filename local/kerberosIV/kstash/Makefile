#	@(#)Makefile	8.1 (Berkeley) 06/01/93

PROG=	kstash
CFLAGS+=-DKERBEROS -DDEBUG -I${.CURDIR}/../include
DPADD=	${LIBKDB} ${LIBKRB} ${LIBDES}
LDADD=	-lkdb -lkrb -ldes 
NOMAN=	noman

.include <bsd.prog.mk>
