#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
/*this is a program to print the alphabets 10 time*/
void print_alphabet_x10(char z);
int main()
{
char z ;
print_alphabet_x10(z);
return 0;
}
void print_alphabet_x10(char z)
{
int y;
y=0;
while(y<10)
{
for (z ='a';z <='z'; z++)
{
putchar(z);            
}        
y++;
putchar('\n');
}
}
