#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc:argument
 * @argv:argument
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int n;
	(void)argc;
	n = 0;
	while (n < argc)
	{
	printf("%s\n", argv[n]);
	n++;
	}
	return (0);
}
