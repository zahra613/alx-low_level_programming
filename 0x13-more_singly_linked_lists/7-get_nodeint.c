#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list
 *@head : head of the linked list
 *@index : index of desired node
 *Return: current_node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current_node != NULL && counter < index)
	{
		current_node = current_node->next;
		counter++;
	}
	if (current_node == NULL)
	{
		return (NULL);
	}
	return (current_node);
}
