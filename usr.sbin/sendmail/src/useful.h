/*
**  USEFUL.H -- Some useful stuff.
**
**	@(#)useful.h	3.1	03/07/81
*/

# define bool	char
# define TRUE	1
# define FALSE	0

# ifndef NULL
# define NULL	0
# endif NULL

# define setbit(bit, word)	(word |= bit)
# define clrbit(bit, word)	(word &= ~bit)
# define bitset(bit, word)	((word) & (bit))
