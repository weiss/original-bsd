#	@(#)Makefile	8.2 (Berkeley) 05/16/94

DIR=	usd/29.diction
SRCS=	rm0 rm1 rm2 ap1 ap2
MACROS=	-ms

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
