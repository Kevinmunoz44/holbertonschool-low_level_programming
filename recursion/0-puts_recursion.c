#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print a string
 * @s: - save values
 *
 * Return: 0;
 */
void _puts_recursion(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
;
puts(s);
}
