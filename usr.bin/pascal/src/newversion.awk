# Copyright (c) 1980, 1993
#	The Regents of the University of California.  All rights reserved.
#
# %sccs.include.redist.sh%
#
#	@(#)newversion.awk	8.1 (Berkeley) 06/06/93
#

/^VERSION = /	{
		    n = split( $3, version, ".")
		    print "VERSION = " version[1] "." version[2]+1
		    break
		}
		{
		    print $0
		}
