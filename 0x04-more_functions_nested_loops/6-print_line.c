#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_line  - Entry point
* @n : 'n is the number of times the character _ should be printed'
*  descreption: 'draw line in terminal'
*   written by black
* Return:  always 0 (success)
**/
void print_line(int n)
{

int line;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (line = 0; line < n; line++)
{
_putchar('_');
}
_putchar('\n');
}
}
