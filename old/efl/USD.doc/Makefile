#	@(#)Makefile	6.2 (Berkeley) 06/04/93

DIR=	ps2/06.efl
SRCS=	efl
MACROS=	-msU

paper.${PRINTER}: ${SRCS}
	${TBL} ${SRCS} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
