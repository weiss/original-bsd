#	@(#)Makefile	5.4 (Berkeley) 06/30/90

SUBDIR=	bugfiler comsat delivermail fingerd ftpd getNAME getty makekey \
	rexecd rlogind rshd talkd telnetd tftpd uucpd kpasswdd

.if   make(clean) || make(cleandir)
SUBDIR+=pcc
.elif ${MACHINE} == "hp300"
SUBDIR+=gcc
.elif ${MACHINE} == "tahoe"
SUBDIR+=pcc
.elif ${MACHINE} == "vax"
SUBDIR+=pcc
.endif

.include <bsd.subdir.mk>
