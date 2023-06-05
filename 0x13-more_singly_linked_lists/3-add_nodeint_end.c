#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head :  doublepointer point to the head of the list
 * @n : value of elements to add
 * Return: value of the elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
