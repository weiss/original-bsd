#	@(#)Makefile	5.22 (Berkeley) 12/28/90

SUBDIR=	libc libcurses libcompat libdbm libm libmp libpc libplot \
	libresolv librpc/rpc libterm libutil liby

.if ${MACHINE} == "tahoe"
SUBDIR+=csu libF77 libI77 libU77
.elif ${MACHINE} == "vax"
SUBDIR+=csu libF77 libI77 libU77
.endif

.include <bsd.subdir.mk>
