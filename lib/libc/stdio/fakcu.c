#ifndef lint
static char sccsid[] = "@(#)fakcu.c	5.1 (Berkeley) 06/05/85";
#endif not lint

/*
 * Null cleanup routine to resolve reference in exit() 
 * if not using stdio.
 */
_cleanup()
{
}
