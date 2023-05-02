#include "main.h"

/**
 * puts2 - Entry point
 *@str : input string
 * written by black
 * Return: Always 0.
 */
void puts2(char *str)

{
int z;
z = 0;
for (z = 0; z <= str[z]; z++)
{
if  (z % 2 != 0)
{
continue;
}
_putchar(str[z]);
}
_putchar('\n');

}
