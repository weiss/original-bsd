(*
 * Copyright (c) 1980 The Regents of the University of California.
 * All rights reserved.
 *
 * %sccs.include.redist.c%
 *
 *	@(#)block.p	5.1 (Berkeley) 04/16/91
 *)

program blocktest(input, output);
procedure A;
	procedure B;
	begin
		writeln('in procedure B');
	end;
begin
	writeln('in procedure A');
	B;
end;

begin
	writeln('in main program');
	A;
end.
