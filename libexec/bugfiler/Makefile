#
# Copyright (c) 1983 Regents of the University of California.
# All rights reserved.  The Berkeley software License Agreement
# specifies the terms and conditions for redistribution.
#
#	@(#)Makefile	5.1 (Berkeley) 06/06/85
#
# Bug report processor and associated programs
#

CFLAGS = -O -DUNIXCOMP
LIBDIR=	/usr/lib
DESTDIR=

bugfiler: bugfiler.c
	${CC} ${CFLAGS} -o bugfiler bugfiler.c

install: bugfiler sendbug.sh bugformat
	install -s bugfiler ${DESTDIR}${LIBDIR}/bugfiler
	install -c sendbug.sh ${DESTDIR}/usr/ucb/sendbug
	install -c -m 644 bugformat ${DESTDIR}/usr/ucb/bugformat

clean:
	rm -f *.o bugfiler
