#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *  print_all - function that prints anything.
 *  @format: the format 
 * Return:
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int arg_count = 0;
	char current_char = format[i];
	va_list args;
	va_start(args, format);
	while (current_char != '\0')
	{
		if (current_char == 's')
	{
		char *arg = va_arg(args, char *);
		if (arg == NULL)
		{
			if (arg_count > 0)
		{
			printf(", (nil)");
		}
		else
		{
			printf("(nil)");
		}
		}
		else
		{
                if (arg_count > 0)
		{
			printf(", %s", arg);
		}
		else
		{
			printf("%s", arg);
		}
		}
		arg_count++;
	}
		else
		{
		if (arg_count > 0)
		{
			printf(", ");
		}
		if (current_char == 'c')
		{
			int arg = va_arg(args, int);
			printf("%c", (char)arg);
			arg_count++;
		}
		else if (current_char == 'i');
		{
			int arg = va_arg(args, int);
			printf("%d", arg);
			arg_count++;
		}
		else if (current_char == 'f')
		{
			double arg = va_arg(args, double);
			printf("%f", arg);
			arg_count++;
		}
		}
		i++;
		current_char = format[i];
	}
	va_end(args);
	printf("\n");
}
