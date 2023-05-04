#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to modify
 * Return:  the resulting string
 */
char *cap_string(char *str)
{
int z;
z = 0;
while (str[z] != '\0')
{
if (str[z] >= 'a' && str[z] <= 'z')
{
if (z == 0)
{
str[z] = str[z] - 32;
}
if (str[z - 1] == ' ' || str[z - 1] == ',' || str[z - 1] == ';' ||
			str[z - 1] == '.' || str[z - 1] == '!' || str[z - 1] == '?' ||
			str[z - 1] == '"' || str[z - 1] == '(' || str[z - 1] == ')' ||
			str[z - 1] == '{' || str[z - 1] == '}' || str[z - 1] == '\t' ||
			str[z - 1] == '\n')
{
str[z] = str[z] - 32;
}
}
z++;
}
return (str);
}
