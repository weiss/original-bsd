#	@(#)Makefile	5.6 (Berkeley) 06/29/90

PROG=	pc2
CFLAGS=	-I/sys/${MACHINE}/inline
SRCS=	langpats.c libcpats.c machdep.c machpats.c main.c
.PATH:	/sys/${MACHINE}/inline
BINDIR=	/usr/libexec/pascal
NOMAN=	noman

.include <bsd.prog.mk>
