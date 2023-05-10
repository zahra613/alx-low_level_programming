#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@a:unt
 *@b:int
 * Return:integer
 */
int find_sqrt(int a, int b);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
		}
	return (find_sqrt(n, 1));
}
/**
 * find_sqrt - find the square of number
 * @a:integer
 * @b:integer
 * Return: integer
 */
int find_sqrt(int a, int b)
{
	if (b * b >  a)
	{
		return (-1);
	}
	if (b * b == a)
	{
		return (b);
	}
	return (find_sqrt(a, b + 1));
}
