/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)FRTN.c 1.4 04/01/81";

#include "h00vars.h"

FRTN(frtn, save)
	register struct formalrtn *frtn;
	char *save;
{
	blkcpy(frtn->fbn * sizeof(struct display), save, &_disply[1]);
}
