#	@(#)Makefile	6.3 (Berkeley) 06/05/93

DIR=	smm/15.uucpnet
SRCS=	network.ms
MACROS=	-ms
REFER=	refer -p /usr/old/dict/papers/Ind

paper.ps: ${SRCS}
	${REFER} -e ${SRCS} | ${TBL} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
