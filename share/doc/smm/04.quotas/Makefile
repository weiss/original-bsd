#	@(#)Makefile	6.2 (Berkeley) 06/30/90

DIR=	smm/04.quotas
SRCS=	quotas.ms
MACROS=	-ms

paper.${PRINTER}: ${SRCS}
	${ROFF} ${SRCS} > ${.TARGET}

.include <bsd.doc.mk>
