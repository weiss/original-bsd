/*-
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)rewinddir.c	5.2 (Berkeley) 06/08/93";
#endif /* LIBC_SCCS and not lint */

#include <sys/types.h>
#include <dirent.h>

void
rewinddir(dirp)
	DIR *dirp;
{

	_seekdir(dirp, dirp->dd_rewind);
	dirp->dd_rewind = telldir(dirp);
}
