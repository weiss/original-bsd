/*
 * Copyright (c) 1983 Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
char copyright[] =
"@(#) Copyright (c) 1983 Regents of the University of California.\n\
 All rights reserved.\n";
#endif /* not lint */

#ifndef lint
static char sccsid[] = "@(#)pagesize.c	5.4 (Berkeley) 06/01/90";
#endif /* not lint */

main()
{
	printf("%d\n", getpagesize());
	exit(0);
}
