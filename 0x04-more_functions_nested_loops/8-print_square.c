#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_square  - Entry point
*  descreption: 'function that prints a square, followed by a new line'
*  @size: integer
*   written by black
* Return:  always 0 (success)
**/

void print_square(int size)
{
int square;
int z;
if (size <= 0)
{
_putchar('\n');
}
for (square = 0; square < size ; square++)
{
for (z = 0; z < size ; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
