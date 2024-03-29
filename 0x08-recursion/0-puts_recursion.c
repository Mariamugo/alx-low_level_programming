#include "main.h"
/*
 * _puts_recursion - prints a string
 * @*s: argument taken by the function, equals 1 byte
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
		_puts_recursion(s + 1);
	}
}
