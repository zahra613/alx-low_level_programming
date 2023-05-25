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

	for (i = 0 ; i < n; i++)
	{

		va_start(args, n);
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && op != NULL)
		{
			printf("%s", op);
		}
	}
	printf("\n");
	va_end(args);
}
