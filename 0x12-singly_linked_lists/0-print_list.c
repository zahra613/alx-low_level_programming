#include "lists.h"
/**
 * print_list - Print element of list
 * @h: first node
 * Return:  list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	if (h->str != NULL)
	{
	printf("[%u] %s\n", h->len, h->str);
}
else
{
	printf("[0] (nil)\n");
}
count++;
h = h->next;
}

return (count);
}
