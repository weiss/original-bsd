#ifndef lint
static char sccsid[] = "@(#)pagesize.c	4.2 (Berkeley) 08/11/83";
#endif

main()
{

	printf("%d\n", getpagesize());
}
