# Copyright (c) 1980 The Regents of the University of California.
# All rights reserved.
#
# %sccs.include.redist.sh%
#
#	@(#)fixmks.sed	6.2 (Berkeley) 04/17/91
#

/	MK/s///
/"/s///g
/,/s// /g
/;.*/s///
/\\(pl/s//+/
/\\(mi/s//-/
/\\(\*\*/s//*/
/\\(eq/s//=/

