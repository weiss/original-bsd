#	@(#)Makefile	5.5 (Berkeley) 06/19/90

PROG=	reboot
DPADD=	${LIBUTIL}
LDADD=	-lutil

.if ${MACHINE} == "hp300"
NOMAN=	noman
.else
MAN8=	reboot_${MACHINE}.0
MANSUBDIR=/${MACHINE}
MLINKS=	reboot_${MACHINE}.8 reboot.8
.endif

.include <bsd.prog.mk>
