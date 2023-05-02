#include "main.h"

/**
 * main - check the code
 * written by blak
 * @str : it's the content of a pointer
 * Return: Always 0.
 */
void _puts(char *str)

{

int z;
z = 0;
while (str[z] != '\0')
{
_putchar(str[z]);
z++;

}
_putchar('\n');
}
