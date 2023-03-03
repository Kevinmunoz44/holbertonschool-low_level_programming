#include "main.h"

/**
 * _strspn - print length of a prefix substring
 * @s: - save values
 * @accept: - initial segment of s which consist
 * Return: 0;
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int j = 0;
for (; *s; s++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
j++;
break;
}
else if (accept[i + 1] == '\0')
return (j);
}
}
return (j);
}
