/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pathnames.h	8.1 (Berkeley) 06/06/93
 */

#ifndef COMPAT
#include <paths.h>
#else
#define	_PATH_DEVNULL	"/dev/null"
#endif

#define	_PATH_ACCESS	"/etc/sliphome/slip.hosts"
#define	_PATH_LOGIN	"/etc/sliphome/slip.login"
#define	_PATH_LOGOUT	"/etc/sliphome/slip.logout"
#define	_PATH_DEBUG	"/tmp/sliplogin.XXXXXX"

