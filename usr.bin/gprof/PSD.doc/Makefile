#	@(#)Makefile	5.3 (Berkeley) 06/30/90

DIR=	papers/gprof
SRCS=	header.me abstract.me intro.me profiling.me gathering.me \
	postp.me present.me refs.me
DPADD=	postp1.pic postp2.pic postp3.pic pres1.pic pres2.pic
MACROS=	-me

paper.${PRINTER}: ${SRCS} ${DPADD}
	${SOELIM} ${SRCS} | ${PIC} | ${TBL} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
