#	@(#)Makefile	7.11 (Berkeley) 05/11/90

PROG=	newfs
CFLAGS+=-DMFS
SRCS=	newfs.c mkfs.c
MAN8=	newfs.0
LINKS=	${BINDIR}/newfs ${BINDIR}/mount_mfs
MLINKS=	mfs.8 newfs.8

.include <bsd.prog.mk>
