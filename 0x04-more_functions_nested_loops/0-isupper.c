#include "main.h"
/**
* _isupper - Entry point
* description: 'this function for upper and lower alphabets'
* @c: ascii code
*  Return 1 : 'if is it uppercase'
*  Return 0 : 'if it is lowercase'
* Return: Always 0 (success).
*/
int _isupper(int c)
{
if (c >= 65 && c <= 95)
{
return (1);
}
else
{
return (0);
}
}
