#	@(#)Makefile	5.3 (Berkeley) 06/01/93

DIR=	smm/07.sendmailop
SRCS=	op.me
MACROS=	-me

all: op.${PRINTER}

op.${PRINTER}: ${SRCS}
	${PIC} ${SRCS} | ${EQN} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
