#include "main.h"

/**
 * print_alphabet - print ten alphabets
 *
 *
 * Return: 0;
 */
void print_alphabet_x10(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
while (alphabet * 10)
{
_putchar(alphabet);
_putchar('\n');
}
}
}
