#	@(#)Makefile	5.3 (Berkeley) 08/04/93

DIR=	usd/29.diction
SRCS=	rm0 rm1 rm2 ap1 ap2
MACROS=	-msU

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
