#	@(#)Makefile	5.29 (Berkeley) 07/15/92

SUBDIR=	libc libcurses libcompat libdbm libedit libkvm libm libmp libplot \
	libresolv librpc/rpc libtelnet libterm libutil liby

.if	${MACHINE} == "tahoe"
SUBDIR+=csu/tahoe.pcc
.elif	${MACHINE} == "vax"
SUBDIR+=csu/vax.pcc
.else
SUBDIR+=csu/${MACHINE}
.endif

.include <bsd.subdir.mk>
