#	@(#)Makefile	6.2 (Berkeley) 06/30/90

DIR=	smm/03.kdebug
SRCS=	kdebug.ms
MACROS=	-msU

paper.${PRINTER}: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
