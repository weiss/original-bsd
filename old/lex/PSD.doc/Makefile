#	@(#)Makefile	6.3 (Berkeley) 06/05/93

DIR=	psd/16.lex
SRCS=	lex.ms
MACROS=	-msU

paper.ps: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
