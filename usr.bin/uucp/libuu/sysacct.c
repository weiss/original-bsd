#ifndef lint
static char sccsid[] = "@(#)sysacct.c	5.3 (Berkeley) 06/23/85";
#endif

#include <sys/types.h>

/*LINTLIBRARY*/

/*
 *	output accounting info
 */

/*ARGSUSED*/
sysacct(bytes, time)
time_t time;
long bytes;
{
	return;
}
