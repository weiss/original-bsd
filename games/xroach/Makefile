#	@(#)Makefile	1.3 (Berkeley) 06/08/93

PROG=	xroach
MAN6=	xroach.0
CFLAGS+= -I${.CURDIR}/bitmaps
DPADD=	${LIBX} ${LIBM}
LDADD=	-lX11/X11 -lm

.include <bsd.prog.mk>
