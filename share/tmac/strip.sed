#! /bin/sed -f
#
# Copyright (c) 1988, 1993
#	The Regents of the University of California.  All rights reserved.
#
# %sccs.include.redist.sh%
#
#	@(#)strip.sed	8.1 (Berkeley) 06/08/93
#

/%beginstrip%/{
	h
	s/.*/.\\" This version has had comments stripped; an unstripped version is available./p
	g
}
/%beginstrip%/,$s/[. 	][ 	]*\\".*//
/^$/d
/\\n@/d
