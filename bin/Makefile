#	@(#)Makefile	5.33 (Berkeley) 04/04/91

SUBDIR=	cat chmod cp csh date dd df echo ed expr hostname kill ln ls \
	mkdir mv pwd rcp rm rmail rmdir sh sleep stty sync tar test

.if   ${MACHINE} == "tahoe"
SUBDIR+=adb ps
.elif ${MACHINE} == "vax"
SUBDIR+=adb ps
.endif

.include <bsd.subdir.mk>
