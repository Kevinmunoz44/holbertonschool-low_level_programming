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
while (n < 10)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}