/*-
 * Copyright (c) 1980 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.proprietary.c%
 */

#ifndef lint
static char sccsid[] = "@(#)label.c	5.2 (Berkeley) 04/22/91";
#endif /* not lint */

label_(s, len)
register char *s;
long len;
{
	char buf[260];
	register char *cp, *cend;

	cp = buf;
	cend = cp + (len < 255 ? len : 255 );
	while ( cp < cend ) 
		*cp++ = *s++;
	*cp = 0;
	label( buf );
}
