#include "main.h"
/**
* print_sign - Entry point
* @n: the charachter in ASCII code
*  descreption: 'print alphabets that are lower case with 1'
*  Return 1: "for lower case 0 for the rest".
*   written by black
* Return:  always 0 (success)
**/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
_putchar(n + '0');
_putchar(',');
_putchar(' ');
_putchar('\n');
}
return (0);
}
