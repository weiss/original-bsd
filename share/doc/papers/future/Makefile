#	@(#)Makefile	1.3 (Berkeley) 06/08/93

DIR=	papers/future
SRCS=	0.t 1.t 2.t r.t
MACROS=	-ms

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
