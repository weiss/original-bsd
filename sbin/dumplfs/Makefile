#	@(#)Makefile	5.1 (Berkeley) 12/31/91

PROG=	dumplfs
CFLAGS+=-I/sys/ufs/lfs
SRCS=	dumplfs.c lfs_cksum.c misc.c
.PATH:	/sys/ufs/lfs
NOMAN=	noman

.include <bsd.prog.mk>
