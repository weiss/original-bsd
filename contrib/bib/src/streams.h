/*
 *	@(#)streams.h	2.1	06/22/83
 */
long int nextrecord(), recsize(), nextline();

# define  maxstr            256
# define  pos(x)            fseek(stream,x,0)

