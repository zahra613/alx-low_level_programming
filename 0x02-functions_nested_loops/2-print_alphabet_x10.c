#include "main.h"
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
* 
*/
/* WRITTEN BY BLACK*/
/*this is a program that print alphabets ten time*/
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
