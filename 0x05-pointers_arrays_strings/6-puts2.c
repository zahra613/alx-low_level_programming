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
while (str[z])
{
if  (z % 2 == 0)
{
_putchar(str[z]);
}
z++;
}
_putchar('\n');

}
