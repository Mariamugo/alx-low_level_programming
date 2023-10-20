#include "main.h"
/**
 * *_memset-function fills memory with constant byte
 * @s:memory area to be filled
 * @b: char to be copied
 * @n:number of times to copy
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
