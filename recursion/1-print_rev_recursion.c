#include "main.h"

/**
 * _print_rev_recursion - print a string reverse
 * @s: - save string
 *
 * Return: 0;
 */
void _print_rev_recursion(char *s)
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
