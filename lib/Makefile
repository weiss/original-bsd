#	@(#)Makefile	5.30 (Berkeley) 07/15/92

SUBDIR=	libc libcurses libcompat libdbm libedit libg++ libkvm libm libmp \
	libplot libresolv librpc/rpc libtelnet libterm libutil liby

.if	${MACHINE} == "tahoe"
SUBDIR+=csu/tahoe.pcc
.elif	${MACHINE} == "vax"
SUBDIR+=csu/vax.pcc
.else
SUBDIR+=csu/${MACHINE}
.endif

.include <bsd.subdir.mk>
