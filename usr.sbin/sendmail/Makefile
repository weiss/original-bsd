#       @(#)Makefile	4.17 (Berkeley) 12/18/92

SUBDIR= mailstats praliases

# don't trivially install sendmail
.if !make(install)
SUBDIR+=src
.endif

tar: Files
	tar cf sendmail.tar `cat Files`

.include <bsd.subdir.mk>
