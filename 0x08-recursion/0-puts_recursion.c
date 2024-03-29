#include "main.h"
/*
 * this function prints a string followed by a new line
 * _puts_recursion - the function prototype
 * @*s - argument taken by the function, equals 1 byte
 * return void
 */

void _puts_recursion(char *s)
{
	/*the basecase/terminating statement*/
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s = s + 1;
	}
}
