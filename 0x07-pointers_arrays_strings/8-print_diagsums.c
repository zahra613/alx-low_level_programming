#include "main.h"
#include <stdio.h>
/**
*  print_diagsums - sum of the two diagonals of a square matrix of integers.
*@a : pointer
*@size : size
*/
void print_diagsums(int *a, int size)
{
int z;
int sm1;
int sm2;
z = 0;
sm1 = 0;
sm2 = 0;
while (z < size)
{
sm1 = sm1 + a[z *size + z];
sm2 = sm2 + a[z *size + size - z - 1];
z++;
}
printf("%d, ", sm1);
printf("%d\n", sm2);
}
