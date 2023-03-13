#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string and send a pointer
 * @str: - pointer save values
 *
 * Return: 0;
 */
char *_strdup(char *str)
{
int a = 0, i = 1;
char *s;
if (str == NULL)
return (NULL);
for (i = 1; i < str[i];)
{
i++;
}
s = malloc((sizeof(char) * i) +1);
if (s == NULL)
return (NULL);
for (a = 0; a < i; a++)
{
s[a] = str[a];
}
s[a] = '\0';
return (s);
}
