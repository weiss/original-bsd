/*
 * Copyright (c) 1988 Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)cat.c	7.5 (Berkeley) 06/28/90
 */

main()
{
	register int c, fd;

	fd = getfile("File", 0);
	while ((c = getc(fd)) >= 0)
		putchar(c);
	exit(0);
}
