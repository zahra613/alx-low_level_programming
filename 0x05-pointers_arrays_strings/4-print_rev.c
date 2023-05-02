#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)

{

int z ;
int len;
len = strlen(s);
z = len-1;
while (z>=0)
{
_putchar(s[z]);
z--;
}
_putchar('\n');

}
