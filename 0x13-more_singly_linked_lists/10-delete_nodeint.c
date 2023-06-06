#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the node at index
 * @head: head of the list
 * @index: position of the node to be deleted
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node = NULL;
	listint_t *current_node = *head;
	unsigned int i;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (!current_node)
			return (-1);
		previous_node = current_node;
		current_node = current_node->next;
	}

	if (!current_node)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);
	current_node = NULL;
	return (1);
}

