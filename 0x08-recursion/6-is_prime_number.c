#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @l:int
 * @a:int
 * Return:integer
 */
int _prime_number(int a, int l);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (0 +  _prime_number(n, 2));
}
/**
 * _prime_number - check if the number is primer or not
 * @l:check
 * @a:number
 * written by black
 * Return: integer
 */
int _prime_number(int a, int l)
{
	if (l >  a / 2)
	{
		return (1);
	}
	if (a % l == 0)
	{
		return (0);
	}
	return (_prime_number(a, l + 1));
}
