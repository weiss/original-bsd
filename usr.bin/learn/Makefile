#	@(#)Makefile	4.12 (Berkeley) 05/11/90

SUBDIR=	lcount learn learnlib lrntee objects

beforeinstall:
	(cd ${LLIB}/learn; rm -rf *)
	(cd ${LLIB}/learn; mkdir C bin editor eqn files macros morefiles)

.include "Makefile.inc"
.include <bsd.subdir.mk>
