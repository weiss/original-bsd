/*
 * Copyright (c) 1983 Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)setuid.c	5.4 (Berkeley) 06/01/90";
#endif /* LIBC_SCCS and not lint */

/*
 * Backwards compatible setuid.
 */
setuid(uid)
	int uid;
{

	return (setreuid(uid, uid));
}
