#       @(#)Makefile	6.2 (Berkeley) 12/21/92

SUBDIR= mailstats praliases

# don't trivially install sendmail
.if !make(install)
SUBDIR+=src
.endif

tar: Files
	tar chf sendmail.tar `cat Files`

.include <bsd.subdir.mk>
