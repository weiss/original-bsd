/*
 * Copyright (c) 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)general.h	8.1 (Berkeley) 06/06/93
 */

/*
 * Some general definitions.
 */


#define	numberof(x)	(sizeof x/sizeof x[0])
#define	highestof(x)	(numberof(x)-1)

#define	ClearElement(x)		memset((char *)&x, 0, sizeof x)
#define	ClearArray(x)		memset((char *)x, 0, sizeof x)
