/*
 * Copyright (c) 1987, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 */

#ifndef lint
static char sccsid[] = "@(#)tree.c	8.2 (Berkeley) 04/01/94";
#endif /* not lint */

#include <err.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ctags.h"

static void	add_node __P((NODE *, NODE *));
static void	free_tree __P((NODE *));

/*
 * pfnote --
 *	enter a new node in the tree
 */
void
pfnote(name, ln)
	char	*name;
	int	ln;
{
	NODE	*np;
	char	*fp;
	char	nbuf[MAXTOKEN];

	/*NOSTRICT*/
	if (!(np = (NODE *)malloc(sizeof(NODE)))) {
		warnx("too many entries to sort");
		put_entries(head);
		free_tree(head);
		/*NOSTRICT*/
		if (!(head = np = (NODE *)malloc(sizeof(NODE))))
			err(1, "out of space");
	}
	if (!xflag && !strcmp(name, "main")) {
		if (!(fp = strrchr(curfile, '/')))
			fp = curfile;
		else
			++fp;
		(void)sprintf(nbuf, "M%s", fp);
		fp = strrchr(nbuf, '.');
		if (fp && !fp[2])
			*fp = EOS;
		name = nbuf;
	}
	if (!(np->entry = strdup(name)))
		err(1, NULL);
	np->file = curfile;
	np->lno = ln;
	np->left = np->right = 0;
	if (!(np->pat = strdup(lbuf)))
		err(1, NULL);
	if (!head)
		head = np;
	else
		add_node(np, head);
}

static void
add_node(node, cur_node)
	NODE	*node,
		*cur_node;
{
	int	dif;

	dif = strcmp(node->entry, cur_node->entry);
	if (!dif) {
		if (node->file == cur_node->file) {
			if (!wflag)
				fprintf(stderr, "Duplicate entry in file %s, line %d: %s\nSecond entry ignored\n", node->file, lineno, node->entry);
			return;
		}
		if (!cur_node->been_warned)
			if (!wflag)
				fprintf(stderr, "Duplicate entry in files %s and %s: %s (Warning only)\n", node->file, cur_node->file, node->entry);
		cur_node->been_warned = YES;
	}
	else if (dif < 0)
		if (cur_node->left)
			add_node(node, cur_node->left);
		else
			cur_node->left = node;
	else if (cur_node->right)
		add_node(node, cur_node->right);
	else
		cur_node->right = node;
}

static void
free_tree(node)
	NODE	*node;
{
	while (node) {
		if (node->right)
			free_tree(node->right);
		free(node);
		node = node->left;
	}
}
