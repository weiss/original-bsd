#ifndef lint
static char sccsid[] = "@(#)close.c	4.1 (Berkeley) 11/10/83";
#endif

#include <signal.h>
#include "hp7221.h"

closepl()
{
	/* receive interupts */
	signal(SIGINT, SIG_IGN);
	printf( "v@}" );			/* Put pen away. */
	fflush( stdout );
}
