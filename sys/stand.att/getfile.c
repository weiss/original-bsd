/*
 * Copyright (c) 1988 Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)getfile.c	7.6 (Berkeley) 05/05/91
 */

#include <sys/param.h>
#include <sys/time.h>
#include "saio.h"

getfile(prompt, mode)
	char *prompt;
	int mode;
{
	int fd;
	char buf[100];

	do {
		printf("%s: ", prompt);
		gets(buf);
	} while ((fd = open(buf, mode)) <= 0);
	return(fd);
}
