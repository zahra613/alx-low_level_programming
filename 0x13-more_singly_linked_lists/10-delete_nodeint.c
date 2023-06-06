#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 *@head : head of the list
 *@index : position in the list
 *Return:1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *node_to_delete = current->next;
	unsigned int i;
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

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}

	if (node_to_delete == NULL)
	{
		return (-1);
	}

	current->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
