/*
 * Copyright (c) 1983 Regents of the University of California.
 * All rights reserved.  The Berkeley software License Agreement
 * specifies the terms and conditions for redistribution.
 */

#ifndef lint
static char sccsid[] = "@(#)geteuid.s	5.1 (Berkeley) 06/03/85";
#endif not lint

#include "SYS.h"

PSEUDO(geteuid,getuid)
	movl	r1,r0
	ret		# euid = geteuid();
