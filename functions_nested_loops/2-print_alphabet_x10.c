#include "main.h"
/**
 * print_alphabet_x10 - print ten alphabets
 *
 *
 * Return: 0;
 */
void print_alphabet_x10(void)
{
char alphabet;
int i;
while (i <= 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchat('\n');
i++;
}
}
