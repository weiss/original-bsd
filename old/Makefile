#	@(#)Makefile	5.14 (Berkeley) 03/08/91

SUBDIR=	compact cpp crypt hostid lex make more sum sysline yacc

.if   (${MACHINE} == "hp300")
SUBDIR+=as.hpux
.elif (${MACHINE} == "tahoe")
SUBDIR+=as.tahoe dbx pcc
.elif ${MACHINE} == "vax"
SUBDIR+=as.vax dbx pcc talk tp
.endif

.include <bsd.subdir.mk>
