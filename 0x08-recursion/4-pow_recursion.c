#include "main.h"
/**
 * _pow_recursion - function returns value of x raised to power of y
 * @x: integer argument taken by the function
 * @y: integer argument taken by function
 * Return: (0)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x ** y);
	}
}
