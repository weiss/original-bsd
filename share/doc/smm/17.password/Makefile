#	@(#)Makefile	8.1 (Berkeley) 06/08/93

DIR=	smm/17.password
SRCS=	password.ms
MACROS=	-ms

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
