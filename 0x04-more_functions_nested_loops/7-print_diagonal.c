#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_line  - Entry point
* @n : 'n is the number of times the character \ should be printed'
*  descreption: 'draw line in terminal'
*   written by black
* Return:  always 0 (success)
**/
void print_diagonal(int n)
{

int diago;
int t;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (diago = 0; diago < n; diago++)
{
for (t=0 ; t < diago; t++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
} 
