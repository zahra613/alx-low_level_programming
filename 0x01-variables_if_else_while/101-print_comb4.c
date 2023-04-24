#include<stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
/*this is a program that print the compbinisation of three numbers*/
int main(void)
{
int z;
int l;
int a;
for (z = 0; z <= 7; z++)
{
for (l = z + 1; l <= 8; l++)
{
for (a = l + 1 ; a <= 9 ; a++)
{
putchar(z + '0');
putchar(l + '0');
putchar(a + '0');
if (z <= 6)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
