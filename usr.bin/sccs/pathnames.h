/*
 * Copyright (c) 1989 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pathnames.h	5.2 (Berkeley) 06/01/90
 */

#include <paths.h>

#define	PROGPATH(name)	"/usr/local/name"
#undef _PATH_TMP
#define	_PATH_TMP	"/tmp/sccsXXXXX"
