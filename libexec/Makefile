#	@(#)Makefile	5.9 (Berkeley) 08/06/92

SUBDIR=	bugfiler comsat fingerd ftpd getNAME getty kpasswdd lfs_cleanerd \
	mail.local makekey rexecd rlogind rshd talkd telnetd tftpd uucpd

.if	${MACHINE} == "hp300"
SUBDIR+=rbootd
.endif

.include <bsd.subdir.mk>
