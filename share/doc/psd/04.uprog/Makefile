#	@(#)Makefile	6.4 (Berkeley) 06/05/93

DIR=	psd/04.uprog
SRCS=	p.mac p0 p1 p2 p3 p4 p5 p6 p8 p9
MACROS=	-ms

paper.ps: ${SRCS}
	${ROFF} ${MAC} ${SRCS} > ${.TARGET}

.include <bsd.doc.mk>
