/*-
 * Copyright (c) 1991 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)rm.c	5.2 (Berkeley) 05/09/91
 */

int eval;

main(argc, argv)
	int argc;
	char **argv;
{
	if (*++argv && **argv == '-') {
		err("no options available", 0);
		_exit(1);
	}
	for (eval = 0; *argv; ++argv)
		if (unlink(*argv)) {
			err(*argv, 1);
			eval = 1;
		}
	_exit(eval);
}

#define	PROGNAME	"rm: "
#include "errfunction"
