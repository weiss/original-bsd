/*
 *	@(#)iargc_.c	5.1 (Berkeley) 11/03/86
 */

long int iargc_()
{
extern int xargc;
return ( xargc - 1 );
}
