#!/bin/csh -f
#
#	@(#)vprm.sh	1.2	(Berkeley)	11/29/82
#
set remote = ucbernie
set execdir = /usr/ucb
if ($remote != `hostname`) then
	set cmd = "/usr/ucb/rsh $remote -n"
else
	set cmd = ""
endif
$cmd $execdir/vprm $argv
