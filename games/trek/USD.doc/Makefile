#	@(#)Makefile	6.3 (Berkeley) 06/05/93

DIR=	usd/31.trek
SRCS=	trek.me
MACROS=	-me

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
