#	@(#)Makefile	5.3 (Berkeley) 01/19/92

PROG=	newlfs
CFLAGS+=-I/sys/ufs/lfs
SRCS=	dkcksum.c lfs.c lfs_cksum.c misc.c newfs.c
NOMAN=	noman
.PATH:	/sys/ufs/lfs ${.CURDIR}/../disklabel

.include <bsd.prog.mk>
