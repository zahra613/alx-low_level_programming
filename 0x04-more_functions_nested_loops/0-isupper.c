#include "main.h"
#include <stdio.h>
/**
* _isupper - Entry point
* description: 'this function for upper and lower alphabets'
* @c: ascii code
*  Return 1 : if is it uppercase
*  Return 0 : if it is lowercase
* Return: Always 0 (success).
*/
int _isupper(int c)
{
if (c == 65 && c <= 90)
{
return (1);
}
if (c == 97 && c <= 122)
{
return (0);
}
return (0);
}
