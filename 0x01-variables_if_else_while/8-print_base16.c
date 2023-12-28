#include <stdio.h>

/**
 * main - function prints all hexadecimal characters
 *
 * Return: always 0
 */

int main(void)
{
	int X = 48;
	int x = 'a';

	while (X <= 57)
	{
		putchar(X);
		X++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');

	return (0);

}
