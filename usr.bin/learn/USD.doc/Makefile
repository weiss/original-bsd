#	@(#)Makefile	8.2 (Berkeley) 05/21/94

DIR=	usd/02.learn
SRCS=	p0 p1 p2 p3 p4 p5 p6 p7
MACROS=	-ms

paper.ps: ${SRCS}
	${REFER} -p Refs -p /usr/old/dict/papers/Ind -e ${SRCS} | \
		${TBL} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
