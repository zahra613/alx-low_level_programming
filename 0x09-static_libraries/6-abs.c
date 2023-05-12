#include "main.h"
#include <stdio.h>
/**
* _abs  - Entry point
* @n: the charachter in ASCII code
*  descreption: 'print alphabets that are lower case with 1'
*  Return 1: "for lower case 0 for the rest".
*   written by black
* Return:  always 0 (success)
**/
int _abs(int n)
{
if (n <= 0)
{
return (-n);
}
else
{
return (n);
}
return (0);
}
