/*
 * Copyright (c) 1989 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pathnames.h	5.4 (Berkeley) 03/07/91
 */

#define	MAIL_CMD	"/usr/sbin/sendmail -i -t -F \"Bugs Bunny\" -f owner-bugs"
#undef _PATH_TMP
#define	_PATH_TMP	"/tmp/BUG_XXXXXX"
