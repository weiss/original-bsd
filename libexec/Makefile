#	@(#)Makefile	5.10 (Berkeley) 09/02/92

SUBDIR=	bugfiler comsat fingerd ftpd getNAME getty kpasswdd lfs_cleanerd \
	mail.local makekey rexecd rlogind rshd talkd telnetd tftpd uucpd

.if	${MACHINE} == "hp300"
SUBDIR+=rbootd
.elif	${MACHINE} == "luna68k"
SUBDIR+=rbootd
.endif

.include <bsd.subdir.mk>
