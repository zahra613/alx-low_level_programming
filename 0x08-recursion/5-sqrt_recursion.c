#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
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
	return (find_sqrt(n,1));
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int find_sqrt(int a, int b)
{
        if (b * b  == a)
        {
                return (b);
                 }
	else 
	{
		return (-1);
		}
        if ( b == a)
        {
        return (-1);
	}
return (find_sqrt(a, b + 1));
}
