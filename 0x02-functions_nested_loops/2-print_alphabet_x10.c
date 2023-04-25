#include "main.h"

/**
 * print_alphabet 10 time
 * written by black
 */
void print_alphabet(void)
{
char z;
int a;
a = 0;
while (a < 10) 
{
for (z = 'a'; z <= 'z'; z++)
{
_putchar(z);
a++;
}
}
_putchar('\n');
}
