#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print all in reverse
 * @s: - save values
 *
 * Return: 0;
 */
void print_rev(char *s)
{
int k;
for (k = 0; s[k] != '\0'; k++)
{
for (k = k - 1; s[k] != '\0'; k--)
{
_putchar(s[k]);
}
}
_putchar('\n');
}
