#include "lists.h"
/**
 * free_listint -  function that frees a listint_t list.
 * @head : the pointer point to the head of the list
 * Return:
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		listint_t *next;

		next = temp;
		temp = temp->next;
		free(next);
	}
	head = NULL;

}
