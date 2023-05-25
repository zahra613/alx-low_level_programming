#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - function that prints numbers, followed by a new line.
*@separator : it's the string to be printed
*@n :number of elements
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *op;

	op = separator;

	/* Initialize a variable to hold the separator string*/
	if (op == NULL)
	{
		separator = op;
	}
	else
	{
		op = "";
	}
	for (i = 0 ; i < n; i++)
	{
		int num;

		va_start(args, n);
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1)
		{
			printf("%s", op);
		}
	}
	printf("\n");
	va_end(args);
}
