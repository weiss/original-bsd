/*-
 * Copyright (c) 1993 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)extern.h	5.1 (Berkeley) 05/17/93
 */

void	error __P((char *, char *));
void	gethead __P((int));
int	process __P((void));
void	redist __P((void));
void	reply __P((void));
void	seterr __P((void));
