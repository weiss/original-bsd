#	@(#)Makefile	5.1 (Berkeley) 06/25/90

PROG=	kstash
CFLAGS+=-DKERBEROS -DDEBUG -I${.CURDIR}/../include
DPADD=	${LIBKDB} ${LIBKRB} ${LIBDES}
LDADD=	-lkdb -lkrb -ldes 
BINDIR=	/usr/bin
NOMAN=	noman

.include <bsd.prog.mk>
