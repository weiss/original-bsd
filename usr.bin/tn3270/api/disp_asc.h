/*
 * Define the translate tables used to go between 3270 display code
 * and ascii
 *
 * @(#)disp_asc.h	1.3 (Berkeley) 07/17/87
 */

extern unsigned char
	disp_asc[256],		/* Goes between display code and ascii */
	asc_disp[256];		/* Goes between ascii and display code */
