/*
 *	@(#)streams.h	1.2	06/14/83
 */
long int nextrecord(), recsize(), nextline();

# define  maxstr            256
# define  pos(x)            fseek(stream,x,0)

