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
int count;
for (count = 0; s[count] != '\0'; count++)
;
for (count = count - 1; s[count] != '\0'; count--)
{
_putchar(s[count]);
}
_putchar('\n');
}
