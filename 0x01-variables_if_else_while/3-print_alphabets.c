#include <stdio.h>

/**
 * main - Program prints alphabetical letters in lowercase then in uppercase
 * Program written by Maria
 * Reurn: 0; program will be a success
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar (a);
		a++;
	}

	while (A <= 'Z')
	{
		putchar (A);
		A++;
	}

	putchar ('\n');

	return (0);

}
