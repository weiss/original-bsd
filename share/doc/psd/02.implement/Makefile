#	@(#)Makefile	6.3 (Berkeley) 06/30/90

DIR=	ps2/04.implement
SRCS=	implement
MACROS=	-ms
REFER=	refer -p /usr/old/dict/papers/Ind -e

paper.${PRINTER}: ${SRCS} fig1.pic fig2.pic
	${SOELIM} ${SRCS} | ${REFER} | ${PIC} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
