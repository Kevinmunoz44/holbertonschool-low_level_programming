#include "main.h"

/**
 * swap_int - print swap values of a and b
 * @a: - save values
 * @b: - save values
 *
 * Return: 0;
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
