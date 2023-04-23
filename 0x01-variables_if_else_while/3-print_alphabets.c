#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point *
* Return: Always 0 (Success)
*/
int main (void)
{
char ch1;
for(ch1 = 'a' ;ch1 <= 'z'; ++ch1)
{
putchar(ch1);
}
for(ch1 = 'A'; ch1 <='Z'; ++ch1)
{
putchar(ch1);
}
putchar('\n');
return (0);  
}
