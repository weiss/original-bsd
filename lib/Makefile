#	@(#)Makefile	5.23 (Berkeley) 01/11/91

SUBDIR=	libc libcurses libcompat libdbm libm libmp libplot \
	libresolv librpc/rpc libterm libutil liby

.if ${MACHINE} == "tahoe"
SUBDIR+=csu libF77 libI77 libU77
.elif ${MACHINE} == "vax"
SUBDIR+=csu libF77 libI77 libU77
.endif

.include <bsd.subdir.mk>
