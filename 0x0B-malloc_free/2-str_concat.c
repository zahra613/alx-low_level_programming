#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1 : string
 * @s2 : string
 * Return: T
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int i;
	int j;
	char *T;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (*(s1 + len1) != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (*(s2 + len2) != '\0')
	{
		len2++;
	}
	T = malloc((len1 + len2 + 1) * sizeof(char));
	if (T == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < len1 ; i++)
	{
		*(T + i) = *(s1 + i);
	}
	for (j = 0 ; j < len2 ; j++)
	{
		*(T + i + j) = *(s2 + j);
	}
	*(T + i + j) = '\0';
	return (T);
	}
