#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number
 *@n : number to converte
 * Return:-
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	printf("%lu", n & 1);
}
