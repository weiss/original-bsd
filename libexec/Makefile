#	@(#)Makefile	5.8 (Berkeley) 07/23/92

SUBDIR=	bugfiler comsat fingerd ftpd getNAME getty kpasswdd mail.local \
	makekey rexecd rlogind rshd talkd telnetd tftpd uucpd

.if	${MACHINE} == "hp300"
SUBDIR+=rbootd
.endif

.include <bsd.subdir.mk>
