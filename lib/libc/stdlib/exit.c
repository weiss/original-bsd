#ifndef lint
static char sccsid[] = "@(#)exit.c	5.1 (Berkeley) 06/05/85";
#endif not lint

exit(code)
	int code;
{

	_cleanup();
	_exit(code);
}
