#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)sobuf.c	5.2 (Berkeley) 03/09/86";
#endif LIBC_SCCS and not lint

#include <stdio.h>

char	_sobuf[BUFSIZ];
