#	@(#)Makefile	5.1 (Berkeley) 12/31/91

PROG=	newlfs
CFLAGS+=-O -I/sys/ufs/lfs
SRCS=	dkcksum.c lfs.c lfs_cksum.c misc.c newfs.c
NOMAN=	noman
.PATH:	/sys/ufs/lfs

.include <bsd.prog.mk>
