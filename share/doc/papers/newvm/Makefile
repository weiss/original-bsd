#	@(#)Makefile	1.3 (Berkeley) 06/30/90

DIR=	papers/newvm
SRCS=	0.t 1.t a.t
MACROS=	-ms
TBL=	dtbl -${PRINTER}
TROFF=	ptroff -${PRINTER}

paper.${PRINTER}: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
