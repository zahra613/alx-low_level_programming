#include "main.h"
/**
 * swap_int - Entry point
 * @a : it's the content of a pointer
 * @b : it's the content of a pointer
 * written by black
 * Return: Always 0.
 */
void swap_int(int *a, int *b)

{

int tmp;
tmp = *a;
*a = *b;
*b = tmp;

}
