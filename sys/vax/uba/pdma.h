/*	pdma.h	3.1	10/14/12	*/

struct pdma
{
	struct	device *p_addr;
	char	*p_mem;
	char	*p_end;
	int	p_arg;
	int	(*p_fcn)();
};
