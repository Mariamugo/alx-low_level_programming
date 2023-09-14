#include <stdio.h>

/**
 * main - Program prints alphabet in lowercae
 * program written by Maria
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
