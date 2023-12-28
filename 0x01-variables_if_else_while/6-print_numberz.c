#include <stdio.h>

/**
 * main - program prints single digit numbers with putchar
 *
 * Return: always 0
 */

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);

}
