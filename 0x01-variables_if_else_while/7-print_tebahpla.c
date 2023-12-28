#include <stdio.h>

/**
 * main - program prints lowercase alphabet backwards
 *
 * Return: always 0
 */

int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);

}
