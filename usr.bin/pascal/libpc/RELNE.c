/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)RELNE.c 1.2 03/07/81";

#include "h00vars.h"

bool
RELNE(siz, str1, str2)

	long		siz;
	register char	*str1;
	register char	*str2;
{
	register int size = siz;

	while (*str1++ == *str2++ && --size)
		/* void */;
	if (size == 0)
		return FALSE;
	return TRUE;
}
