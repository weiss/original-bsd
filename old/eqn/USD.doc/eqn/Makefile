#	@(#)Makefile	5.2 (Berkeley) 06/05/93

DIR=	usd/23.eqn
SRCS=	e.mac e0 e1 e2 e3 e4 e5 e6 e7
MACROS=	-msU

paper.ps: ${SRCS}
	${EQN} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
