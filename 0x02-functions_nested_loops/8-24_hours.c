#include "main.h"

/**
 * main - check the code
 * written by black
 * Return: Always 0.
 */
void jack_bauer(void)
	{
    int minute;
    int hour;
    for (hour=0; hour<=23; hour++) {

    for (minute=0;minute<=59; minute++)
    {

        _putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');

		_putchar((minute % 10) + '0');

         _putchar('\n');
    }
        _putchar('\n');
    }
   
}

