#	@(#)Makefile.inc	5.1 (Berkeley) 02/18/91

# locale sources
.PATH: ${.CURDIR}/${MACHINE}/locale ${.CURDIR}/locale

SRCS+=	lconv.c localeconv.c setlocale.c
