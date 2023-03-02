#include "main.h"

/**
 * reverse_array - print array upside down
 * @a: - values of array
 * @n: - save values
 *
 * Return: 0;
 */
void reverse_array(int *a, int n)
{
int l, i;
l = n - 1;
for (i = 0; i < n / 2; i++)
{
int e, t;
e = a[i];
t = a[l];
a[i] = t;
a[l] = e;
l--;
}
}
