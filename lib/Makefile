#	@(#)Makefile	5.27 (Berkeley) 04/08/92

SUBDIR=	libc libcurses libcompat libdbm libkvm libm libmp libplot \
	libresolv librpc/rpc libtelnet libterm libutil liby

.if	${MACHINE} == "tahoe"
SUBDIR+=csu.tahoe.pcc
.elif	${MACHINE} == "vax"
SUBDIR+=csu.vax.pcc
.else
SUBDIR+=csu.${MACHINE}
.endif

.include <bsd.subdir.mk>
