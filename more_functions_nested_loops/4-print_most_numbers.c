#include "main.h"

/**
 * print_most_numbers - print numbers 0 the 9
 *  less the 2 and 4
 *
 *  Return: 0;
 */
void print_most_numbers(void)
{
int k;
for (k = 0; k <= 9; k++)
if (k != 2 && k != 4)
_putchar(k + '0');
_putchar('\n');
}
