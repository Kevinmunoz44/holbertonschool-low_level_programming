#include "main.h"

/**
 * _memset - print that fills memory with a constant byte.
 *@s: - array
 *@b: - values provided
 *@n: - size
 *Return: 0;
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
