#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point *
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 0; i <= 9 ; i++)
{
putchar(i + '0');
if (i <= 8)
{
putchar(',');
}
if(i<=8)
  {
    putchar(' ');
  }
}
putchar('\n')
return (0);
}
