/* Copyright (c) 1979 Regents of the University of California */

static char sccsid[] = "@(#)HALT.c 1.2 06/10/81";


HALT()
{
		ERROR("Call to procedure halt\n", 0);
		PCEXIT(0);
}
