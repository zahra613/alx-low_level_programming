#include "variadic_functions.h"
#include <stdarg.h>
/**
* print_numbers - function that prints numbers, followed by a new line.
*@separator : it's the string to be printed
*@n :number of elements
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;
	const char *sep;

	va_start(args, n);

if (separator != NULL)
{
	sep = separator;
}
for (i = 0; i < n; i++)
{
	num = va_arg(args, int);
	printf("%d", num);
	if (i < n - 1)
	{
		printf("%s", sep);
	}
}
printf("\n");

va_end(args);
}
