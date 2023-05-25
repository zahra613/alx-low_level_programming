#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of parameters
 *@n : nmber of parameters
 * Return: 0 or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	unsigned int  i, sum;
	va_list args;

	va_start(args, n);

	sum = 0;

	for (i = 0 ; i < n; i++)
	{
		int num;

		num = va_arg(args, int);

		sum = sum + num;
	}
	va_end(args);
	return (sum);
}
