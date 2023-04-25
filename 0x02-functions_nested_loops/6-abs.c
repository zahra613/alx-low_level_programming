#include "main.h"
#include <stdio.h>

/**
* main - abs() of numbers
* written by black
* Return: Always 0.
*/
int _abs(int)
	{
    int n;
   _ printf("please enter a number ");
    _scanf( "%d", &n);
    n = abs(n);
    _putchar(n+'0');
     _ putchar('\n');
      return(0);
}

