#	@(#)Makefile	8.1 (Berkeley) 04/13/94

DIR=	smm/09.sendmail
SRCS=	changes.me
MACROS=	-me

all: changes.ps

changes.ps: ${SRCS}
	rm -f ${.TARGET}
	${PIC} ${SRCS} | ${ROFF} > ${.TARGET}

.include <bsd.doc.mk>
