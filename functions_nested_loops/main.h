#include <stdio.h>
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet < 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
}
