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

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (counter < index - 1)
	{
		if (current_node->next == NULL)
		{
			return (-1);
		}
		current_node = current_node->next;
		counter++;
	}

	node_to_delete = current_node;
	if (node_to_delete == NULL)
	{
		return (-1);
	}
	current_node->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
