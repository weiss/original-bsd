#	@(#)Makefile	6.3 (Berkeley) 04/17/91

# refer.mac should be typed on a 12 pitch Daisy wheel printer
DIR=	usd/29.refer
SRCS=	refer.bib
MACROS=	-msU
REFER=	refer -p biblio
CLEANFILES=biblio.ig

paper.${PRINTER}: ${SRCS}
	${REFER} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
