/*-
 * Copyright (c) 1991 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)recno.h	5.1 (Berkeley) 09/11/91
 */

enum SRCHOP { SDELETE, SINSERT, SEARCH};	/* Rec_search operation. */

#include "../btree/btree.h"
#include "extern.h"
