#	@(#)Makefile	6.2 (Berkeley) 06/30/90

DIR=	smm/18.password
SRCS=	password.ms
MACROS=	-ms

paper.${PRINTER}: ${SRCS}
	${TBL} ${SRCS} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
