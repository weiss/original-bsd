#	@(#)Makefile	4.11 (Berkeley) 07/02/90

PROG=	make
CFLAGS+=-DASCARCH -I${.CURDIR}
SRCS=	main.c doname.c misc.c files.c dosys.c gram.c
MAN1=	make.0
CLEANFILES=gram.c y.tab.h

.include <bsd.prog.mk>
