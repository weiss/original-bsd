#	@(#)Makefile	6.4 (Berkeley) 06/08/93

DIR=	usd/30.rogue
SRCS=	rogue.me
MACROS=	-me

paper.${PRINTER}: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
