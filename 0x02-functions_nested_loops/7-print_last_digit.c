#include "main.h"
/**
* print_last_digit  - Entry point
* @n: the charachter in ASCII code
*  descreption: 'print alphabets that are lower case with 1'
*  Return 1: "for lower case 0 for the rest".
*   written by black
* Return:  always 0 (success)
**/
int print_last_digit(int n)
{
int last;
last = (n % 10);
if (n >= 0)
{
_putchar(last + '0');
return (last);
}
else
{
_putchar(-last + '0');
return (-last);
}
}
