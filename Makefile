#	@(#)Makefile	5.5 (Berkeley) 05/31/93

SUBDIR=	bin contrib games kerberosIV lib libexec old sbin share \
	usr.bin usr.sbin

afterinstall:
	(cd share/man && make makedb)

.include <bsd.subdir.mk>
