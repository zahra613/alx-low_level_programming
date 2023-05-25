#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - a function that prints anything
*
* @format: a list of args
*/

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j, k = 0;
	char *str;
	const char arg_symbol[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (arg_symbol[j])
		{
			if (format[i] == arg_symbol[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), k = 1;
			break;
		case 's':
			str = va_arg(list, char *), k = 1;
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	va_end(list), printf("\n");
}
