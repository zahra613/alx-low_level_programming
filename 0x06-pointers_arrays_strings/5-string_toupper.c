#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str : input
 * Return :str
 */
char	*string_toupper(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if (str[z] >= 'a' && str[z] <= 'z')
			str[z] = str[z];
		z++;
	}
	return (str);
}
