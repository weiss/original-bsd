static char Sccsid[] = "@(#)userexit.c	1.2	02/15/87";
/*
	Default userexit routine for fatal and setsig.
	User supplied userexit routines can be used for logging.
*/

userexit(code)
{
	return(code);
}
