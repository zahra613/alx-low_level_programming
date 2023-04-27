#include<stdio.h>
/**
* main - 'prints fizz if it multiple of three print buzz if it's one of multi 5'
* written by black
* @z: integer
* Return: Always 0 (Success)
*/
int main(void)
{	
int z;
for (z = 1; z <= 100; z++)
{
if (z % 3 == 0 && z % 5 == 0)
{
printf("FizzBuzz");
}
else if (z % 5 == 0)
{
printf("Buzz");
}
else if (z % 3 == 0)
{	
printf("Fizz");
}
else
{
printf("%d", z);
}
if (z != 100)
printf(" ");
}
printf("\n");
return (0);
}
