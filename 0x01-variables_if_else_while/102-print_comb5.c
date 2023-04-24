#include<stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
/*this is a program that print the compbinisation of two number with repetition  numbers*/
int main(void)
{
int z;
int l;
for (z = 0; z <= 99; z++)
{
for (l = z+1; l <= 99; l++)
{
putchar((z / 10) + '0');
putchar((z % 10) + '0');
putchar(' ');
putchar((l / 10) + '0');
putchar((l % 10) + '0');
if (z != 98)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
