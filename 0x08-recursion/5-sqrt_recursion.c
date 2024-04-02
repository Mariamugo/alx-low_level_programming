#include "main.h"
/**
 * _sqrt_recursion - function returns natural square root of a number
 * @n: integer argument passed to the function
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (real_sqrt_recursion(n, 0));
	}
}
/**
 * real_sqrt_recursion - function performs the actual squareroot ops
 * @n: integer argument passed to function
 * @m: interger argument passed to function
 * Return: 0
 */
int real_sqrt_recursion(int m, int n)
{
	m = 1;

	if (m * m < n)
	{
		return (-1);
	}
	else if (m * m == n)
	{
		return (m);
	}
	else
	{
		return (real_sqrt_recursion(m + 1, n));
	}
}
