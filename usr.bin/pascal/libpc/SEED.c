/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)SEED.c 1.1 10/30/80";

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
