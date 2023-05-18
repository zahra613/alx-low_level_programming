#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 *@s1: string
 *@s2: string
 *@n : nmbr of bytes in each string
 * Return: -.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  len1, len2, len3, i, j;
	char *ptr;
	/*Treat NULL strings as empty strings*/
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
	while ((*(s2 + len2) && len2 < n) != '\0')
	{
		len2++;
	}
	len3 = len1 + len2;
	ptr = malloc((len3 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* copy character from s1 to ptr */
	for (i = 0 ; i < len1 ; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	/* copy character from s2 to ptr */
	for (j = 0 ; j < len2 ; j++)
	{
		*(ptr + i + j) = *(s2 + j);
	}
	*(ptr + len3) = '\0';
	return (ptr);
	}

