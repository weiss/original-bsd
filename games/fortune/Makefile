#	@(#)Makefile	5.4 (Berkeley) 04/27/91

SUBDIR=	fortune

.ifmake !(install)
SUBDIR+=strfile
.else
SUBDIR+=datfiles
.endif

.include <bsd.subdir.mk>
