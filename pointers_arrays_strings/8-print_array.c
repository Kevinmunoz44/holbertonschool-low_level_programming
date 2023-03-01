#include "main.h"
#include <stdio.h>
/**
 * print_array - print the number of array
 * @a: - save values
 * @n: - save values
 *
 * Return: 0;
 */
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", j[a]);
if (j != (n - 1))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
