#include "main.h"
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
int print_sign(int n)
	{
    
      if(n> 0 )
      {
          putchar('+');
          return(1);

      }
      if(n== 0 )
      {
          putchar('0');
          return(0);

      }
       if(n< 0 )
      {
          putchar('-');
          return(-1);

      
       putchar(n+'0');
      putchar(',');
      putchar(' ');
      putchar('\n');
    }

}