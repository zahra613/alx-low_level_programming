#include "main.h"
/**
* main - check the code
*written by black
* Return: Always 0.
*/
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
