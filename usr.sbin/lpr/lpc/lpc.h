/*
 * Copyright (c) 1983 Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)lpc.h	5.5 (Berkeley) 07/21/92
 */

/*
 * Line printer control program.
 */
struct	cmd {
	char	*c_name;		/* command name */
	char	*c_help;		/* help message */
					/* routine to do the work */
	void	(*c_handler) __P((int, char *[]));
	int	c_priv;			/* privileged command */
};
