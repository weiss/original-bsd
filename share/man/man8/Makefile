#	@(#)Makefile	5.8 (Berkeley) 06/29/90

MAN8=	adduser.0 intro.0 makedev.0 rc.0 sticky.0
SUBDIR=	man8.hp300 man8.vax

all: ${MAN8}

clean depend lint tags:

cleandir:
	rm -f ${MAN8}

install: maninstall

.include <bsd.prog.mk>
