#	@(#)Makefile.inc	5.2 (Berkeley) 01/23/91

# btree sources

.PATH: ${.CURDIR}/btree

SRCS+=	big.c btree.c delete.c insert.c lrucache.c lruhash.c lrutils.c \
	search.c seq.c split.c storage.c updutils.c utils.c
