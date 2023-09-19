#include "main.h"

/**
 * main - swaps two integers
 *@a: integer
 *@b: integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
