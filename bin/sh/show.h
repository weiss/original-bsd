/*-
 * Copyright (c) 1995
 *      The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)show.h	1.1 (Berkeley) 05/04/95
 */

void showtree __P((union node *));
void trputc __P((int));
void trace __P((const char *, ...));
void trputs __P((char *));
void trargs __P((char **));
void opentrace __P((void));
