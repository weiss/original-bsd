/*
 * Copyright (c) 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)cat.c	8.1 (Berkeley) 06/11/93
 */

main()
{
	register int c, fd;

	fd = getfile("File", 0);
	while ((c = getc(fd)) >= 0)
		putchar(c);
	exit(0);
}
