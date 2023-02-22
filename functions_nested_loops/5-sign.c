#include "main.h"
#include <ctype.h>

/**
 * print_sign - print the signs of numbers
 * @n: - save the signs of the numbers
 *
 * Return: 0;
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(',');
_putchar(' ');
_putchar('\n');
return (1);
}
else if (n < 0)
{
_putchar('-');
_putchar(',');
_putchar(' ');
_putchar('\n');
return (-1);
}
else
{
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar('\n');
return (0);
}
}
