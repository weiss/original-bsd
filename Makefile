#	@(#)Makefile	5.4 (Berkeley) 07/18/92

# BROKEN: contrib
SUBDIR=	bin games kerberosIV lib libexec old sbin share usr.bin usr.sbin

afterinstall:
	(cd share/man && make makedb)

.include <bsd.subdir.mk>
