#	@(#)Makefile	5.8 (Berkeley) 06/12/93

SUBDIR=	bin contrib games include kerberosIV lib libexec old sbin \
	share usr.bin usr.sbin

afterinstall:
	(cd share/man && make makedb)

build:
	(cd include && make install)
	make cleandir
	(cd lib && make depend && make && make install)
	(cd kerberosIV && make && make install)
	make depend && make && make install
	
.include <bsd.subdir.mk>
