#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
*  more_numbers  - Entry piont
* Description: 'print numbers to 14 ten time'
* Return: always 0
*/

void more_numbers(void)
{

int i;
int j;
j = 0;
while (j < 10)
{
for (i = 0; i <= 14; i++)
{
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
j++;
_putchar('\n');

}
_putchar('\n');
}
