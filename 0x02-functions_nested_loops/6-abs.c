#include "main.h"
#include <stdio.h>

/**
* main - abs() of numbers
* written by black
* Return: Always 0.
*/
int _abs(int n)
	{
	if(n<0 )	 {
    _abs(n);
   return(n); 
    _putchar('\n');
     }
}

