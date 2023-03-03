#include "main.h"

/**
 * _strspn - print length of a prefix substring
 * @s: - save values
 * @accept: - initial segment of s which consist
 * Return: 0;
 */
unsigned int _strspn(char *s, char *accept)
{
int i, k;
int j = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == s[k - 1])
{
j++;
}
}
}
return (j);
}
