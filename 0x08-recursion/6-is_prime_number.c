#include "main.h"
/**
 * is_prime_number - returns 1 if the integer is a prime number
 * @n: integer argument passed to the function
 * Return: 0
 */
int check_prime_numbe(int n, int i);

int is_prime_number(int n)
{
	return (check_prime_number(n, 1));
}
/**
 * check_prime_number - check is the number is prime
 * @n: argument passed to the function
 * @i: argument passed to function
 * Return: always 0
 */
int check_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n % i == 0 && i > 1)
	{
		return 0;
	}
	if ((n / i) < i)
	{
		return 1;
	}

	return (check_prime_number(n, i + 1));
}
