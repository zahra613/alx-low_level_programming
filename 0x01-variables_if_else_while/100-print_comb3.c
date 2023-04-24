#include<stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
/*this is a program that print the compbinisation of twoo numbers*/
int main(void)
{
int z;
int l;
for (z = 0; z <= 8; z++)
{
for (l = z + 1; l <= 9; l++)
{
putchar(z + '0');
putchar(l + '0');
if (z <= 7)
{
putchar(',');
putchar(' ');  
}
}
}
putchar('\n');
return (0);
}
