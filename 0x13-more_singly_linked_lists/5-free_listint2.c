#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head : double pointer
 * 
 */
void free_listint2(listint_t** head)
{
	while (*head != NULL)
	{
		listint_t *next;
		next = (*head)->next;
		free(*head);
		head = next;
	}
	*head = NULL;

}
