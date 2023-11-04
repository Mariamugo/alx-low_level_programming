#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

/*defining the function and the argument it takes*/

char *create_array(unsigned int size, char c)
{
	/*decalring the variables*/
	char *cr;
	unsigned int i;
/*checks if size of the array is 0*/
	if (size == 0)
		return (NULL);/*null means no array to return*/

	cr = malloc(sizeof(c) * size);/*mem alloc of char c is 1 byte*/

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
