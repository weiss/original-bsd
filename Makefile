#	@(#)Makefile	5.6 (Berkeley) 05/31/93

SUBDIR=	bin contrib games include kerberosIV lib libexec old sbin \
	share usr.bin usr.sbin

afterinstall:
	(cd share/man && make makedb)

.include <bsd.subdir.mk>
