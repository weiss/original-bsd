#	@(#)Makefile	5.5 (Berkeley) 03/03/93

PROG=	ls
SRCS=	cmp.c getbsize.c stat_flags.c ls.c print.c util.c
.PATH:	${.CURDIR}/../../bin/df
DPADD=	${LIBUTIL}
LDADD=	-lutil

.include <bsd.prog.mk>
