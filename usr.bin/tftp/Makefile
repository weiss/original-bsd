#
# Copyright (c) 1983 Regents of the University of California.
# All rights reserved.  The Berkeley software License Agreement
# specifies the terms and conditions for redistribution.
#
#	@(#)Makefile	5.1 (Berkeley) 06/06/85
#
ALL=	tftp
DESTDIR=
CFLAGS=-O

all: ${ALL}

tftp:	main.o tftp.o
	${CC} main.o tftp.o -o tftp

clean:
	rm -f ${ALL} *.o *.s errs core a.out t.?

install: 
	install -s tftp ${DESTDIR}/usr/ucb
