#	@(#)Makefile	6.3 (Berkeley) 06/30/90

DIR=	smm/08.timedop
SRCS=	timed.ms
MACROS=	-ms

paper.${PRINTER}: ${SRCS}
	${ROFF} ${SRCS} > ${.TARGET}

.include <bsd.doc.mk>
