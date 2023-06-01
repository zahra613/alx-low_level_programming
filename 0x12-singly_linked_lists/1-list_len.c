#include "lists.h"

/**
 * list_len - function that returns the number of elements.
 * @h:  first element in the node
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
