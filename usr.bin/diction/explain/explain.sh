#!/bin/sh -
#
# %sccs.include.proprietary.sh%
#
#	@(#)explain.sh	4.7 (Berkeley) 04/17/91
#

D=/usr/share/dict/explain.d
while	echo 'phrase?'
	read x
do
	case $x in
	[a-z]*)	sed -n /"$x"'.*	/s/\(.*\)	\(.*\)/use "\2" for "\1"/p' $D
	esac
done
