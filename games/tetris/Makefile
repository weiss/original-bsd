#	@(#)Makefile	5.1 (Berkeley) 05/17/93

PROG=	tetris
SRCS=	input.c screen.c shapes.c scores.c tetris.c
MAN6=	tetris.0
DPADD=	${LIBTERM}
LDADD=	-ltermcap
HIDEGAME=hidegame

all: ${PROG}

.include <bsd.prog.mk>
