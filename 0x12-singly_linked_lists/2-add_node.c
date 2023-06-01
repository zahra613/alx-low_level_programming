#include "lists.h"
/**
 * add_node - new node
 * Return: Address of new element of NULL if fail.
 * @head:  first node
 * @str: string to be duplicated and stored in the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head  =  new_node;
	return (new_node);
}
