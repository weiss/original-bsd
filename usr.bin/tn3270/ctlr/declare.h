/*
 * Declarations of routines from the controller.
 *
 *	@(#)declare.h	1.2 (Berkeley) 08/28/88
 */

extern void
	AddHost(),
	DoReadModified(),
	DoReadBuffer(),
	OptInit(),
	SendToIBM(),
	SendTransparent();

extern int
	DataFrom3270(),
	DataFromNetwork(),
	OptOrder(),
	OutputClock,
	TransparentClock;
