/*-
 * Copyright (c) 1991, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)extern.h	8.1 (Berkeley) 06/05/93
 */

void	err __P((const char *, ...));
void	get __P((int, off_t, void *, size_t));

extern char *special;
