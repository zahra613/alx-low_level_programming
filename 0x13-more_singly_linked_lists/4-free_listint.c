#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list.
 * @head : the pointer point to the head of the list
 * Return:
 */
void free_listint(listint_t *head)
{

	while (head != NULL)
	{
		listint_t *next;
		next  = head;
		head = head->next;
		free(next);
	}
	free(head);
}
