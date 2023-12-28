#include <stdio.h>

/**
 * main - program prints single digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');

	return (0);
}
