/*
 * Determine the leftmost index of the character
 * in the string.
 */

static char *SccsId = "@(#)index.c	1.1 10/08/80";

char *
index(str, ch)
	char *str;
{
	register char *cp;
	register int c;

	for (c = ch, cp = str; *cp; cp++)
		if (*cp == c)
			return(cp);
	return(NOSTR);
}
