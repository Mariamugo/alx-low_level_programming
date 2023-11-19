#include <stdio.h>
#include "lists.h"
/**
 * print_list - function prints all elements of list
 * @h: parameter pointing to head of the list
 *
 * Return: the numder of nodes
 */

size_t print_list(const list_t *h)

{
	/*size_t is unsigned integer*/
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (%s)\n", 0, "nil");
			h = h->next;
			nodes++;
		}

		else
		{
			/*call the head to access any part of the list*/
			printf("[%d] (%s)\n", h->len, h->str);
		}
		/*update value of h to point to the next node*/
		h = h->next;
		nodes++;
	}
	return (nodes);


}
