#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() | RAND_MAX / 2;
	if (n > 0)
	{
		printf("%u is positive\n");
	}
	else if (n == 0)
	{
		printf("%u is zero\n");
	}
	else
		n < 0
	{
		printf("%u is negative\n");
	}
	return (0);
}