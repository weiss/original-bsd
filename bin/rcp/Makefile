#	@(#)Makefile	5.5 (Berkeley) 06/20/92

PROG=	rcp
SRCS=	rcp.c krcmd.c kcmd.c util.c
CFLAGS+=-DKERBEROS -DCRYPT
DPADD=	${LIBKRB} ${LIBDES}
LDADD=	-lkrb -ldes
BINOWN=	root
BINMODE=4555
.PATH:	${.CURDIR}/../../usr.bin/rlogin

.include <bsd.prog.mk>
