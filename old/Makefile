#	@(#)Makefile	5.17 (Berkeley) 05/26/91

SUBDIR=	compact cpp crypt hostid ld lex make more roff sum symorder \
	sysline yacc

.if   (${MACHINE} == "hp300")
SUBDIR+=as.hpux
.elif (${MACHINE} == "tahoe")
SUBDIR+=as.tahoe dbx pcc
.elif ${MACHINE} == "vax"
SUBDIR+=as.vax dbx pcc talk tp
.endif

.include <bsd.subdir.mk>
