/*-
 * Copyright (c) 1983 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)erase.c	5.2 (Berkeley) 04/22/91";
#endif /* not lint */

#include "aed.h"

/*---------------------------------------------------------
 *	This routine erases the screen.
 *
 *	Results:	None.
 *	Side Effects:	The screen is cleared.
 *---------------------------------------------------------
 */
erase()
{
    setcolor("FF");
    putc('\14', stdout);
    putc('\33', stdout);
    putc('Q', stdout);
    outxy20(curx, cury);
    (void) fflush(stdout);
}
