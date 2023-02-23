#include "main.h"

/**
 * print_numbers - print numbers 0 the 9
 *
 * Return: 0;
 */
void print_numbers(void)
{
int i, k;
i = 0;
while (i < 9)
{
for (k = 0; k <= 9; k++)
{
_putchar(k);
}
_putchar('\n');
i++;
}
}
