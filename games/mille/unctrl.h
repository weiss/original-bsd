/*
 * Copyright (c) 1982, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)unctrl.h	8.1 (Berkeley) 05/31/93
 */

/*
 * unctrl.h
 */

extern char	*_unctrl[];

# define	unctrl(ch)	(_unctrl[ch & 0177])
