#include<stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
/*this is a program that print the compbinisation of three numbers*/
int main(void)
{
char ch1;
for (ch1 = 'a'; ch1 <= 'z'; ch1++)
{
if (ch1 == 'e' || ch1 == 'q' )
{
ch1++;
}
putchar(ch1);
}
putchar('\n');
return (0);
}
