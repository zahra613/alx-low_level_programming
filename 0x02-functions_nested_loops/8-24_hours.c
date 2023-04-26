#include "main.h"
/**
* jack_bauer  - Entry point
* @c: the charachter in ASCII code
*  descreption: 'print alphabets that are lower case with 1'
*  Return 1: "for lower case 0 for the rest".
*   written by black
* Return:  always 0 (success)
**/
void jack_bauer(void)
{
int minute;
int hour;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
