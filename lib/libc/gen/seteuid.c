/*
 * Copyright (c) 1983 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 */

#ifndef lint
static char sccsid[] = "@(#)seteuid.c	5.1 (Berkeley) 06/05/85";
#endif not lint

seteuid(euid)
	int euid;
{

	return (setreuid(-1, euid));
}
