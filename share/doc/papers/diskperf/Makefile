#	@(#)Makefile	6.2 (Berkeley) 06/30/90

DIR=	papers/diskperf
SRCS=	abs.ms motivation.ms equip.ms methodology.ms tests.ms results.ms \
	conclusions.ms appendix.ms
MACROS=	-ms

paper.${PRINTER}: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
