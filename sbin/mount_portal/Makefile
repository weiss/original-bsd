#	@(#)Makefile	8.2 (Berkeley) 01/12/94

CFLAGS+=-I/sys
PROG=	mount_portal
PTAL=	pt_conf.c pt_exec.c pt_file.c pt_tcp.c
SRCS=	mount_portal.c conf.c activate.c ${PTAL}
MAN8=	mount_portal.0
DPADD=	$(LIBCOMPAT)
LDADD=	-lcompat

.include <bsd.prog.mk>
