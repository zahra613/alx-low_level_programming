#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z, l;

	for (z = 0; z <= 99; z++)
	{
		for (l = 0; l <= 99; l++)
		{
			if (z <= 97)
			{
				putchar((z / 10) + '0');
				putchar((l % 10) + '0');
				putchar(' ');
				putchar((z / 10) + '0');
				putchar((l % 10) + '0');
				if (z <= 99 || l <= 99  )
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
