/*-
 * Copyright (c) 1983 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)point.c	4.2 (Berkeley) 04/22/91";
#endif /* not lint */

point(xi,yi){
		move(xi,yi);
		label(".");
		return;
}
