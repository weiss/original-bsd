#	@(#)Makefile	5.4 (Berkeley) 03/07/91

PROG=	hexdump
CFLAGS+=-fwritable-strings
SRCS=	conv.c display.c hexdump.c hexsyntax.c odsyntax.c parse.c
MAN1=	hexdump.0 od.0
LINKS=	${BINDIR}/hexdump ${BINDIR}/od

.include <bsd.prog.mk>
