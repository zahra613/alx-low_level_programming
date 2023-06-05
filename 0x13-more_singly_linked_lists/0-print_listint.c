#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h : it's a pointer that pointer on the head of the list
 * Return: list
 */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{

		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		counter++;
	       h = h->next;
	}
	return (counter);
}
