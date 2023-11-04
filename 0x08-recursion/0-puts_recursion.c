#include <stdio.h>
/*
 * this program prints a string followed by a new line
 * void _puts_recursion(char *s) - the function prototype
 * @*s - argument taken by the function, equals 1 byte
 * return void
 */
/*declaring function prototype*/
void _puts_recursion(char *s);

int main()
{
	_putchar(*s);
	/*calling the function*/
	_puts_recursion(++s);

	return;
}
/*defining the function*/
void _puts_recursion(char *s)
{
	/*the basecase/terminating statement*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
}
