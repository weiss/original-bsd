#	@(#)Makefile	5.7 (Berkeley) 05/31/93

SUBDIR=	bin contrib games include kerberosIV lib libexec old sbin \
	share usr.bin usr.sbin

afterinstall:
	(cd share/man && make makedb)

build:
	(cd include && make install)
	make cleandir && make depend
	(cd lib && make && make install)
	(cd kerberosIV && make && make install)
	make && make install
	
.include <bsd.subdir.mk>
