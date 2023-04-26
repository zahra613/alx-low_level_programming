#include "main.h"
/**
* islower - Entry point *
*descreption: "is lower case "
*   written by black
*
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
