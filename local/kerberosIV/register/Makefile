#	@(#)Makefile	5.1 (Berkeley) 06/25/90

PROG=	register
SRCS=	register.c des_rw.c
CFLAGS+=-DKERBEROS -DDEBUG -I${.CURDIR}/../include
DPADD=	${LIBKRB} ${LIBDES}
LDADD=	-lkrb -ldes
BINDIR=	/usr/bin
BINOWN=	root
BINMODE=4555

.include <bsd.prog.mk>
