/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)READLN.c 1.2 01/24/81";

#include "h00vars.h"
#include "h01errs.h"

READLN(curfile)

	register struct iorec	*curfile;
{
	if (curfile->funit & FWRITE) {
		ERROR(EREADIT, curfile->pfname);
		return;
	}
	IOSYNC(curfile);
	if ((curfile->funit & EOLN) == 0) {
		fscanf(curfile->fbuf, "%*[^\n]%*c");
	}
	curfile->funit |= SYNC;
}
