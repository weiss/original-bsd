#	@(#)Makefile	5.9 (Berkeley) 01/31/91

SUBDIR=	compact crypt hostid lex make yacc

.if   (${MACHINE} == "tahoe")
SUBDIR+=pcc
.elif ${MACHINE} == "vax"
SUBDIR+=pcc talk tp
.endif

.include <bsd.subdir.mk>
