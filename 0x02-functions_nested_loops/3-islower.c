#include "main.h"
/**
* _islower - Entry point
* @c: the charachter in ASCII code
*  descreption: 'print alphabets that are lower case with 1 and otherwise print 0 '
*  return 1: "for lower case 0 for the rest"
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
