#include "main.h"

/**
 * main - check the code
 *written by black
 * Return: Always 0.
 */
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
if(n <= 97)
{
_putchar(',');
_putchar(' ');
}
}
}
