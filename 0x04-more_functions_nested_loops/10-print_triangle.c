#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
* print_triangle  - Entry point
*  descreption: 'function that prints a triangle, followed by a new line'
*  @size: integer
*   written by black
* Return:  always 0 (success)
**/
void print_triangle(int size)
{
int l, z;
if (size <= 0)
{
_putchar('\n');
}
for (l = 0; l < size; l++)
{
for (z = 0; z < size; z++)
{
if (z < size - l - 1)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
