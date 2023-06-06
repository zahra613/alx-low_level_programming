#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head : head of the list
 * @idx : index of the desired node
 * @n : value to add
 * Return: adress of new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = *head;
	unsigned int counter = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = new_node;
		*head = new_node;
		return (new_node);
	}
	while (current_node != NULL && counter < idx - 1)
	{
		current_node = current_node->next;
		counter++;
	}
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
