#include "main.h"

/**
 *@a: integer to swap
 *@b: integer to swap
 *swap_int - swaps integers
 *
 */
void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
