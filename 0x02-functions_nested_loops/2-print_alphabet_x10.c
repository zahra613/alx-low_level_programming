#include "main.h"
/**
 * print_alphabet_x10 - Entry point
* descreption: " print_alphabet_x10 print alphabets  ten times"
* return: always 0(success)
*WRITTEN BY BLACK
**/
void print_alphabet_x10(void)
{
char z;
int a;
a = 0;
while (a < 10)
{
for (z = 'a'; z <= 'z'; z++)
{
_putchar(z);
}
a++;
_putchar('\n');
}
}
