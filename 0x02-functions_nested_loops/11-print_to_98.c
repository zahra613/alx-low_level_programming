#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print n to 98 counts
*	separated by comma, followed
* by space and number should be
*	printed in order
* @c: the charachter in ASCII code
* @n: the charachter in ASCII code
*written by black
* Return: Always 0.
*/
void print_to_98(int n)
{
int c;
if (n > 98)
for (c = n; c > 98; c--)
printf("%d, ", c);
else
for (c = n; c < 98; c++)
printf("%d, ", c);
printf("98\n");
}
