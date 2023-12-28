#include <stdio.h>

/**
 * main - program prints lowercase alphabets except e and q
 *
 * Return: always 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');

	return (0);

}
