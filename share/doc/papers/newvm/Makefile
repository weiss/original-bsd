#	@(#)Makefile	1.4 (Berkeley) 06/08/93

DIR=	papers/newvm
SRCS=	0.t 1.t a.t
MACROS=	-ms

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
