#include "main.h"

/**
 * puts_half - print last character
 * @str: - save values
 *
 * Return: 0;
 */
void puts_half(char *str)
{
int k = 0;
while (str[i] != '\0')
{
k++;
}
if (!(k % 2))
{
k = k / 2;
}
else
{
k = ((k + 1) / 2);
}
while (*(str + k) != '\0')
{
_putchar(*(str + k));
k++;
}
_putchar('\n');
}
