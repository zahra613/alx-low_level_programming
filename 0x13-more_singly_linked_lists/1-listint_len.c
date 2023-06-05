#include "lists.h"
/**
 * listint_len -  function that returns the number of elements in a linked list
 * @h : pointer point on the head of the list
 * Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *new_node;

	new_node = h;

	if (new_node == NULL)
	{
		return (0);
	}
	while (new_node != NULL)
	{
		counter++;
		new_node = new_node->next;
	}
	return (counter);
}
