#include "main.h"
/**
* _islower - Entry point
* 'c'
*  descreption: '_islower'
*   written by black
* return:  always 0 (success)
**/
int _islower(int c)
{
if (c >= 'a' &&  c <= 'z')
return (1);
else
return (0);
_putchar('\n');
return (0);
}
