/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pathnames.h	8.1 (Berkeley) 06/04/93
 */

#define	MAIL_CMD	"/usr/sbin/sendmail -i -t -F \"Bugs Bunny\" -f owner-bugs"
#undef _PATH_TMP
#define	_PATH_TMP	"/tmp/BUG_XXXXXX"
