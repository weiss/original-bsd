#	@(#)Makefile	5.1 (Berkeley) 06/30/90

DIR=	papers/beyond43
SRCS=	beyond43.ms
MACROS=	-ms

paper.${PRINTER}: ${SRCS}
	${ROFF} ${SRCS} > ${.TARGET}

.include <bsd.doc.mk>
