#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s : char
 * written by black
 * Return
 */
void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		 _puts_recursion(s);
		}
	else
	{
		_putchar('\n');

	}
}
