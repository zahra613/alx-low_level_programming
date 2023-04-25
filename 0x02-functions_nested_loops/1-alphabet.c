#include "main.h"
/**
* main - prints alphabets 
* Return: Always 0 (Success)
*/
/*this is a program to print the alphabets*/
void print_alphabet(char z);
int main(void)
{
char z ;
print_alphabet(z);
return (0);
}
void print_alphabet(char z)
{
for (z = 'a';z <= 'z'; z++)
{
putchar(z);
}
putchar('\n');
}
