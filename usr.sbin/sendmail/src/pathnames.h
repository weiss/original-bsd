/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pathnames.h	6.3 (Berkeley) 02/21/93
 */

#define	_PATH_SENDMAILCF	"/etc/sendmail.cf"
#define	_PATH_SENDMAILFC	"/etc/sendmail.fc"
#ifdef BSD4_4
#define _PATH_SENDMAILPID	"/var/run/sendmail.pid"
#else
#define _PATH_SENDMAILPID	"/etc/sendmail.pid"
#endif
