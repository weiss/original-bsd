#	@(#)Makefile	5.4 (Berkeley) 12/26/92

LIB=	sa
SRCS=	bmap.c close.c dev.c getfile.c gets.c ioctl.c lseek.c open.c \
	printf.c read.c stat.c sys.c write.c
.PATH:	../../../stand
NOPROFILE=noprofile

.include <bsd.lib.mk>

CFLAGS+=-I.. -I../../..
