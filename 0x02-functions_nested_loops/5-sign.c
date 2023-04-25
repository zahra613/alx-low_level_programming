#include "main.h"
/**
* 5-sign.c -Entry point
* description: "print alphabet in lower and uppercase"
* Return: Always 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return(1);
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
_putchar(n+'0');
_putchar(',');
_putchar(' ');
_putchar('\n');
}
return (0);
}
