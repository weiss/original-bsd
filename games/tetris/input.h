/*-
 * Copyright (c) 1992 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)input.h	5.1 (Berkeley) 12/22/92
 */

void	eat_input __P((void));
int	rwait __P((struct timeval *));
int	tgetchar __P((void));
void	tsleep __P((void));
