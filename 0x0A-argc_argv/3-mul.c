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
	int j;
	int multi;
	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		multi = i * j;
		printf("%d\n", multi);
	}
	return (0);
}


