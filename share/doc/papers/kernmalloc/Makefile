#	@(#)Makefile	1.5 (Berkeley) 07/06/90

DIR=	papers/kernmalloc
SRCS=	kernmalloc.t appendix.t
MACROS=	-ms

paper.${PRINTER}: ${SRCS} alloc.fig usage.tbl
	${SOELIM} ${SRCS} | ${TBL} | ${PIC} | ${EQN} | ${GRIND} | ${ROFF} \
	> ${.TARGET}

.include <bsd.doc.mk>
