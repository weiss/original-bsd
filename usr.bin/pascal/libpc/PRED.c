/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)PRED.c 1.2 03/07/81";

#include "h01errs.h"

long
PRED(value, lower, upper)

	long	value;
	long	lower;
	long	upper;
{
	value--;
	if (value < lower || value > upper) {
		ERROR(ERANGE, value);
		return;
	}
	return	value;
}
