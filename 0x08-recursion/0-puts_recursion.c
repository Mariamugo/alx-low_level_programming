#include "main.h"
/*
 * _puts_recursion - prints a string
 * @s: argument taken by the function, equals 1 byte
 * Return: void
 */

void _puts_recursion(char *s)
{

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
