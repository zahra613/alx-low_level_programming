#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @n : int
 * @a: input string
 * written black
 * Return: Always 0.
 */
void print_array(int *a, int n)

{

int z;
z = 0;
while (z<n)
{	    
printf ("%d", a[z]);
z++;
if (z!=n)
{
printf (",");
printf(" ");
}
}
printf("\n");

}
