/*-
 * %sccs.include.proprietary.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)sobuf.c	5.3 (Berkeley) 04/20/91";
#endif /* LIBC_SCCS and not lint */

#include <stdio.h>

char	_sobuf[BUFSIZ];
