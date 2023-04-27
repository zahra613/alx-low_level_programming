#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_numbers  - Entry point
*  descreption: 'print from 1 to 10'
*   written by black
* Return:  always 0 (success)
**/
void print_numbers(void)
{
int c;
for (c = 0 ; c <= 9 ; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
