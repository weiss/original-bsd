/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)TELL.c 1.1 01/16/81";

#include "h00vars.h"

/*
 * Find current location
 */
TELL(curfile)

	register struct iorec	*curfile;
{
	long loc;

	loc = ftell(curfile);
	if ((curfile->funit | SYNC) == 0)
		loc += 1;
	return loc;
}
