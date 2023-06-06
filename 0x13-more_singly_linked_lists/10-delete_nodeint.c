#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 *@head : head of the list
 *@index : position in the list
 *Return:1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current_node = *head;
	listint_t *node_to_delete;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
		return (1);
	}
	while (counter < index - 1 && current_node != NULL)
	{
		if (current_node->next == NULL)
		{
			return (-1);
		}
		current_node = current_node->next;
		counter++;
	}

	node_to_delete = *head;
	if (node_to_delete == NULL)
	{
		return (-1);
	}
	current_node->next = node_to_delete->next;
	free(current_node);
	current_node = NULL;
	return (1);
}
