#	@(#)Makefile	5.5 (Berkeley) 04/27/91

SUBDIR=	fortune

.ifmake (clean) || ifmake (cleandir)
SUBDIR+=datfiles
.endif

.ifmake !(install)
SUBDIR+=strfile
.else
SUBDIR+=datfiles
.endif

.include <bsd.subdir.mk>
