#	@(#)Makefile	5.1 (Berkeley) 05/20/93

DIR=	papers/nfs
SRCS=	nfs-notes.me
MACROS=	-me

paper.${PRINTER}: ${SRCS}
	${TBL} ${SRCS} | ${ROFF} > ${.TARGET}
.include <bsd.doc.mk>
