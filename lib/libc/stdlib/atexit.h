/*-
 * Copyright (c) 1990, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)atexit.h	8.1 (Berkeley) 06/04/93
 */

/* must be at least 32 to guarantee ANSI conformance */
#define	ATEXIT_SIZE	32

struct atexit {
	struct atexit *next;		/* next in list */
	int ind;			/* next index in this table */
	void (*fns[ATEXIT_SIZE])();	/* the table itself */
};

struct atexit *__atexit;	/* points to head of LIFO stack */
