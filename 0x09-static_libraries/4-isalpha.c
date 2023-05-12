#include "main.h"
/**
* _isalpha - Entry point
* @c: the charachter in ASCII code
*  descreption: 'print alphabets that are lower case with 1'
*  Return 1: "for lower case 0 for the rest".
*   written by black
* Return:  always 0 (success)
**/
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
else
return (0);
}
