(*
 * Copyright (c) 1980, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)pointer.p	8.1 (Berkeley) 06/06/93
 *)

program pointer(input, output);
type	xp = ^x;
	x = record
		y : integer;
		a : real;
	end;

var	p : xp;
begin
	new(p);
	p^.y := 5;
	p^.a := 3.14;
	writeln('pointer test');
end.
