/*
 *	@(#)streams.h	2.2	09/23/83
 */
long int nextrecord(), recsize(), nextline();

# define  maxstr            256
# define  pos(x)            fseek(stream,x,0)

