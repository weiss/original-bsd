#	@(#)Makefile	8.1 (Berkeley) 06/05/93

PROG=	mount_nfs
CFLAGS+=-DNFS
MAN8=	mount_nfs.0
DPADD=	${LIBRPC}
LDADD=	-lrpc

.include <bsd.prog.mk>
