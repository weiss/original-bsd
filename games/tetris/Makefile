#	@(#)Makefile	5.2 (Berkeley) 05/29/93

PROG=	tetris
SRCS=	input.c screen.c shapes.c scores.c tetris.c
MAN6=	tetris.0
DPADD=	${LIBTERM}
LDADD=	-ltermcap
HIDEGAME=hidegame

.include <bsd.prog.mk>
