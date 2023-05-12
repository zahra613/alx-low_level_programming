#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc:argument
 * @argv:argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{

int i;
int sum;
int j;
sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
return (0);

}
