#	@(#)Makefile	5.2 (Berkeley) 06/05/93

DIR=	usd/27.invert
SRCS=	refer
MACROS=	-msU

paper.ps: ${SRCS}
	${REFER} ${SRCS} | ${TBL} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
