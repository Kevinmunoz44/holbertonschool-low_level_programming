#include "main.h"

/**
 * _strcmp - Your function should work exactly like strcmp
 * @s1: - save values
 * @s2: - save values
 *
 * Return: 0;
 */
int _strcmp(char *s1, char *s2)
{
for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
;
if (*s1 == *s2)
{
return (0);
}
return (*s1 - *s2);
}
