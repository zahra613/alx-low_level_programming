#include "main.h"
#include <stdio.h>
/**
 * _isupper - 'this function for upper and lower alphabets '
 * return 1: 'if is it uppercase'
 * return 0: 'if it is lowercase'
 * Return: Always 0.
 */
int _isupper(int c)
	 {
int z;

      for(c=65;c<=90;c++)
      {
      for(z=97;z<=122;z++)
      {
      if(c<=90)
         {
          return(1);
         }
          else
         {
          return(0);
         }
      }
      _putchar(c + '0');
      _putchar(z+ '0');
      }
      _putchar('\n');
    return(0);
   }
