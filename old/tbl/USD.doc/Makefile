#	@(#)Makefile	8.2 (Berkeley) 05/16/94

DIR=	usd/25.tbl
SRCS=	tbl
MACROS=	-ms

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
