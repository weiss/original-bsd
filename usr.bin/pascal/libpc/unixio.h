(*
 * Copyright (c) 1979, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)unixio.h	8.1 (Berkeley) 06/06/93
 *)

const
sccsid = '@(#)unixio.h 8.1 06/06/93';

type
fileptr = record
	cnt :integer
	end;

function TELL(
var	fptr :text)
{returns} :fileptr;

  external;

procedure SEEK(
 var	fptr :text;
 var	cnt :fileptr);

  external;

procedure APPEND(
 var	fptr :text);

   external;
