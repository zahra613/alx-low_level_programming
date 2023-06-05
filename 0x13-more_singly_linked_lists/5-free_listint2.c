#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head : double pointer
 * 
 */
void free_listint2(listint_t** head)
{
	listint_t *temp = *head;
	while (temp != NULL)
	{
		listint_t *next;
		next = temp->next;
		free(next);
		temp = next;
	}
	*head = NULL;

}
