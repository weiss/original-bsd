#
# @(#)Makefile	1.1	12/14/84
#
# Mark Opperman (opcode@monet.BERKELEY)
#

libgremlin.a:	gremlinlib.o
		chmod 755 gremlinlib.o
		ar r libgremlin.a gremlinlib.o
		chmod 755 libgremlin.a
		ranlib libgremlin.a

gremlinlib.o:	gremlinlib.c gremlin.h
		cc -c -O gremlinlib.c
