/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)SEED.c 1.3 01/06/81";

#include <math.h>

SEED(value)

	long	value;
{
	static long	seed;
	long		tmp;

	srand(value);
	tmp = seed;
	seed = value;
	return tmp;
}
