/*-
 * Copyright (c) 1980, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)align.h	8.1 (Berkeley) 06/06/93
 */

    /*
     *	alignment of various types in bytes.
     *	sizes are found using sizeof( type ).
     */
#ifdef vax
#   define A_CHAR	1
#   define A_INT	4
#   define A_FLOAT	4
#   define A_DOUBLE	4
#   define A_LONG	4
#   define A_SHORT	2
#   define A_POINT	4
#   define A_STRUCT	1
#   define A_STACK	4
#   define A_FILET	4
#   define A_SET	4
#   define A_MIN	1
#   define A_MAX	4
#endif vax
#ifdef tahoe
#   define A_CHAR	1
#   define A_INT	4
#   define A_FLOAT	4
#   define A_DOUBLE	4
#   define A_LONG	4
#   define A_SHORT	2
#   define A_POINT	4
#   define A_STRUCT	4
#   define A_STACK	4
#   define A_FILET	4
#   define A_SET	4
#   define A_MIN	1
#   define A_MAX	4
#endif tahoe
#ifdef mc68000
#   define A_CHAR	1
#   define A_INT	2
#   define A_FLOAT	2
#   define A_DOUBLE	2
#   define A_LONG	2
#   define A_SHORT	2
#   define A_POINT	2
#   define A_STRUCT	2
#   define A_STACK	2
#   define A_FILET	2
#   define A_SET	2
#   define A_MIN	1
#   define A_MAX	2
#endif mc68000
