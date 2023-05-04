#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @str: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *str)
{

int z;
z = 0;
while (str[z] != '\0')
{
if (str[z] >= 'a' && str[z] <= 'z')
str[z] = str[z] - 32;
z++;
}
return (str);

}
