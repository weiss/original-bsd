#	@(#)Makefile	5.2 (Berkeley) 12/16/90

DIR=	papers/fsinterface
SRCS=	fsinterface.ms
MACROS=	-ms
PRINTER=lz

paper.${PRINTER}: ${SRCS}
	${ROFF} ${SRCS} > ${.TARGET}

.include <bsd.doc.mk>
