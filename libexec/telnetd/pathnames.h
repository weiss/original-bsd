/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pathnames.h	8.1 (Berkeley) 06/04/93
 */

#if BSD > 43

# include <paths.h>

# ifndef _PATH_LOGIN
#  define	_PATH_LOGIN	"/usr/bin/login"
# endif

#else
 
# define	_PATH_TTY	"/dev/tty"
# ifndef _PATH_LOGIN
#  define	_PATH_LOGIN	"/bin/login"
# endif

#endif

#ifdef BFTPDAEMON
#define		BFTPPATH	"/usr/ucb/bftp"
#endif  /* BFTPDAEMON */
