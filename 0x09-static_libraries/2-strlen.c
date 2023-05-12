#include "main.h"
/**
 *  _strlen - Entry point
 *  @s : is an char
 * written by black
 * Return: Always 0.
 */
int _strlen(char *s)

{

int x;
x = 0;
while (*s++)
{
x++;
}

return (x);

}

