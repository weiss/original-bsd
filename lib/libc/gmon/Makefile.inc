#	@(#)Makefile.inc	5.1 (Berkeley) 07/10/92

# gmon sources
.PATH: ${.CURDIR}/gmon

SRCS+=	gmon.c mcount.c

# mcount cannot be compiled with profiling
mcount.po: mcount.o
	cp mcount.o mcount.po
