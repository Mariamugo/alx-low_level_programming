#include "main.h"

/**
 *swap_int - swaps integers
 *@a: integer to swap
 *@b: integer to swap
 *
 */
void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
