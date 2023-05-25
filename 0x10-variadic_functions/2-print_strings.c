#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 *@separator : the string to be printed
 *@n : nmbr of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator == NULL)
	{
		printf("(nil)");
	}
	va_start(args, n);

	for (i = 0 ; i < n ; ++i)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
		{
			 printf("%s", str);
		}
		else
		{
			 printf("(nil)");
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}




