/*-
 * Copyright (c) 1985 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pathnames.h	5.6 (Berkeley) 05/11/93
 */

#include <paths.h>

#ifdef sgi
#define	_PATH_MASTERLOG	"/usr/adm/timed.masterlog"
#define	_PATH_TIMEDLOG	"/usr/adm/timed.log"
#else
#define	_PATH_MASTERLOG	"/var/log/timed.masterlog"
#define	_PATH_TIMEDLOG	"/var/log/timed.log"
#endif
