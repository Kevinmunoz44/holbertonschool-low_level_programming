#include <stdio.h>

/**
 * main - print the numbers with single digit
 *
 *
 * Return: 0;
 */
int main(void)
{
int n = 0;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
putchar('\n');
return (0);
}
