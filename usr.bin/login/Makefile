#	@(#)Makefile	5.5 (Berkeley) 05/11/90

CFLAGS+=-DKERBEROS
PROG=	login
DPADD=	${LIBUTIL} ${LIBKRB} ${LIBDES}
LDADD=	-lutil -lkrb -ldes
BINOWN=	root
BINMODE=4555

.include <bsd.prog.mk>
