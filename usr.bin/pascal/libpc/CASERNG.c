/*-
 * Copyright (c) 1982 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
static char sccsid[] = "@(#)CASERNG.c	1.2 (Berkeley) 04/09/90";
#endif /* not lint */

CASERNG(val)
	int val;
{
	ERROR("Label of %D not found in case\n", val);
}
