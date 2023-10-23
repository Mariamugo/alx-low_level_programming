#include "main.h"

/**
 * _puts - prints string followed by newline
 * _putchar - function prints a char ouput
 * @str: pointer to string
 * Return: void
 */
void _puts(char *str)
{
	int i;
	i = 0;

	void _putchar(char c);

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');

}
