#include "lists.h"
/**
 * print_list - Print element of list
 * @h: first node
 * Return:  list
 */
size_t print_list(const list_t *h)
{
	char *str;
	int count = 0;
	int len;

	while (h != NULL)
	{
	len = h->len;
	str = h->str;
	if (str != NULL)
	{
	printf("[%u] %s\n", len, str);
}
else
{
	printf("[0] (nil)\n");
}
h = h->next;
count++;
}

return (count);
}
