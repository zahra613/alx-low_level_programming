#include "main.h"
/**
*print_to_98 - print n to 98 counts
*	separated by comma, followed
*	by space and number should be
*	printed in order
* 
*written by black
* Return: Always 0.
*/
void print_to_98(int n)
{
int z;
int c;
if (z > 98)
for (c = z; c > 98; c--)
printf("%d, ", c);
else
for (c = z; c < 98; c++)
printf("%d, ", c);
_putchar("98\n");
return (0);
}
