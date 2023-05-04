#include "main.h"
/**
 * reverse_array - reverse string
 * @a:string
 * @n : int
 * Return:int
 */
void reverse_array(int *a, int n)

{
int z;
int tmp;
int l;
l = n - 1;
z = 0;
while (z < n / 2)

{
tmp = a[z];
a[z] = a[l];
a[l--] = tmp;
z++;
}
}
