/*
 * Copyright (c) 1983 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)pause.c	5.6 (Berkeley) 06/01/90";
#endif /* LIBC_SCCS and not lint */

/*
 * Backwards compatible pause.
 */
pause()
{
	long sigblock();

	sigpause(sigblock(0L));
}
