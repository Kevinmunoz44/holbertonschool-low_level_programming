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
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
