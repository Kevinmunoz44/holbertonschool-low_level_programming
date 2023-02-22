#include "main.h"

/**
 * print_last_digit - print the last digit
 * @digit: - save values
 *
 * Return: 0;
 */
int print_last_digit(int digit)
{
int n;
n = digit % 10;
if (n < 0)
{
n = n * -1;
}
_putchar(n + '0');
return (n);
}
