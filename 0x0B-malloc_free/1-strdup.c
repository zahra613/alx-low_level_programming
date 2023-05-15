#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  function that return a pointer to new space in memory
 * @str : pointer that point on array of character
 *written by black
 * Return: T .
 */
char *_strdup(char *str)
{
	int i;
	int len;
	char *T;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	T = malloc((len) * sizeof(char));

	if (T == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len ; i++)
	{
		*(T + i) = *(str + i);
	}
	return (T);
}
