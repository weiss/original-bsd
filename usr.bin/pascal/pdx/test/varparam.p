(*
 * Copyright (c) 1980, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)varparam.p	8.1 (Berkeley) 06/06/93
 *)

program varparam(input, output);
var i : integer;

procedure p(var i : integer);
begin
	i := 3;
	writeln('end of p');
end;

procedure q(var i : integer);
var j : integer;
begin
	p(i);
	writeln('end of q');
end;

begin
	q(i);
	writeln('end of test, i = ', i:1);
end.
