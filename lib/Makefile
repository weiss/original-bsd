#	@(#)Makefile	5.26 (Berkeley) 11/15/91

SUBDIR=	libc libcurses libcompat libdbm libm libmp libplot \
	libresolv librpc/rpc libtelnet libterm libutil liby

.if	${MACHINE} == "tahoe"
SUBDIR+=csu.tahoe.pcc
.elif	${MACHINE} == "vax"
SUBDIR+=csu.vax.pcc
.else
SUBDIR+=csu.${MACHINE}
.endif

.include <bsd.subdir.mk>
