#include "main.h"
/**
* 2-print_alphabet_x10.c  Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
* Return: Always 0 (Success)
*WRITTEN BY BLACK
**/
void print_alphabet_x10(void)
{
char z;
int a;
a = 0;
while (a < 10)
{
for (z = 'a'; z <= 'z'; z++)
{
_putchar(z);
}
a++;
_putchar('\n');
}
}
