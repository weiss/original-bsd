#	@(#)Makefile	5.1 (Berkeley) 11/12/92

DIR=	papers/jus
SRCS=	paper.ms
MACROS=	-ms
PRINTER=lz

paper.${PRINTER}: ${SRCS}
	${ROFF} ${SRCS} > ${.TARGET}

.include <bsd.doc.mk>
