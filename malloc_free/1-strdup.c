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
char *d;
int i, n = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
n++;
d = malloc(sizeof(char) * (n + 1));
if (d == NULL)
return (NULL);
for (i = 0; str[i]; i++)
d[i] = str[i];
d[n] = '\0';
return (d);
}
