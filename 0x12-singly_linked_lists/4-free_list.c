#include "lists.h"
/**
 * free_list - free list_t
 * @head: the head of the list
 * Return:
 */
void free_list(list_t* head)
{
	list_t  *temp = head;
	list_t *next;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
