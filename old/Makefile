#	@(#)Makefile	5.6 (Berkeley) 06/29/90

SUBDIR=	compact crypt lex make yacc

.if   make(clean) || make(cleandir)
SUBDIR+=talk
.elif ${MACHINE} == "vax"
SUBDIR+=talk
.endif

.include <bsd.subdir.mk>
