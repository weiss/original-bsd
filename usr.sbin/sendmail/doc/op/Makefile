#	@(#)Makefile	5.4 (Berkeley) 06/05/93

DIR=	smm/07.sendmailop
SRCS=	op.me
MACROS=	-me

all: op.${PRINTER}

op.ps: ${SRCS}
	${PIC} ${SRCS} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
