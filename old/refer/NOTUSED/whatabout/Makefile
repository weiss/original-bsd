#	@(#)Makefile	5.1 (Berkeley) 05/11/90

PROG=	what
CFLAGS+=-I${.CURDIR}/../refer
SRCS=	what1.c what2.c what3.c what4.c mkey3.c shell.c
DPADD=	${LIBCOMPAT}
LDADD=	-lcompat
NOMAN=	noman

.PATH:	${.CURDIR}/../hunt ${.CURDIR}/../mkey

.include "../../Makefile.inc"
.include <bsd.prog.mk>
