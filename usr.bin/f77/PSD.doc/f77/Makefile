#	@(#)Makefile	8.1 (Berkeley) 06/08/93

DIR=	psd/08.f77
SRCS=	f77.ms
MACROS=	-msU

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
