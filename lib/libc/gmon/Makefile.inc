#	@(#)Makefile.inc	5.2 (Berkeley) 06/01/93

# gmon sources
.PATH: ${.CURDIR}/gmon

SRCS+=	gmon.c mcount.c
MAN3+=	moncontrol.0

# mcount cannot be compiled with profiling
mcount.po: mcount.o
	cp mcount.o mcount.po
