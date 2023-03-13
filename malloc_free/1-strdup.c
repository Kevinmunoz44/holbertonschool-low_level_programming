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
int i, f;
char *k;
if (str == NULL)
{
return (NULL);
}
for (i = 1; i < str[i];)
{
i++;
}
k = malloc((sizeof(char) * i) + 1);
if (k == NULL)
{
return (NULL);
}
for (f = 0; f < i; f++)
{
k[f] = str[f];
}
k[f] = '\0';
return (k);
}
