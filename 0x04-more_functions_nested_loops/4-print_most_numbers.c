#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_most_numbers  - Entry point
*  descreption: 'print from 1 to 10 except 2 and 4'
*   written by black
* Return:  always 0 (success)
**/
void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c != 2 && c != 4)
{
_putchar(c + '0');
}
}
_putchar('\n');
}
