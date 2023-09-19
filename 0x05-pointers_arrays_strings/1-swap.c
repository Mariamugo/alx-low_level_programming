#include "main.h"

/**
 * main - swaps two integers
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
