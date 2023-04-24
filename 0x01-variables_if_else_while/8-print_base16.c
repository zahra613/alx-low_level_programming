#include <stdio.h>
/**
* main - Entry piont
* Description: 'print numbers of base 16'
* Return: always 0
*/
/* this is a program to print the hexadecimal value*/
int main(void)
{
int i;
char j;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
