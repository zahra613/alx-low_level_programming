#include "main.h"
/**
* main - abs() of numbers
* written by black
* Return: Always 0.
*/
int _abs(int)
	{
    int n;
    printf("please enter a number ");
    scanf( "%d", &n);
    n = abs(n);
    putchar(n+'0');
      putchar('\n');
      return(0);
}

