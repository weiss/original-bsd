#	@(#)Makefile	5.4 (Berkeley) 06/17/90

SUBDIR=	compact crypt make more od talk yacc

.if (${MACHINE} == "vax")
SUBDIR+=talk
.elif make(clean) || make(cleandir)
SUBDIR+=talk
.endif

.include <bsd.subdir.mk>
