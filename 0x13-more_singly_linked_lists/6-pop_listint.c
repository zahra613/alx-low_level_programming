#include "lists.h"
/**
 * pop_listint -  function that deletes the head node of a linked list
 * @head : double pointer point on the head of the list
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
