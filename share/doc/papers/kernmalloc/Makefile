#	@(#)Makefile	1.7 (Berkeley) 06/08/93

DIR=	papers/kernmalloc
SRCS=	kernmalloc.t appendix.t
MACROS=	-ms

paper.${PRINTER}: ${SRCS} alloc.fig usage.tbl
	${SOELIM} ${SRCS} | ${TBL} | ${PIC} | ${EQN} | ${GRIND} | \
	    ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
