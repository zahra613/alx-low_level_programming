#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *		alphabet from a - z
 *   written by black
 */
void print_alphabet(char z);
int main(void)
{
    char z;
    print_alphabet(z);

    return 0;
}
void print_alphabet(char z)
{
    for(z='a';z<='z';z++)
    {
        putchar(z);
    }
    putchar('\n');
}
