#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 *
 * Return: 0;
 */
int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet < 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
}

