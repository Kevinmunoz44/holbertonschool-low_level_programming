#include "main.h"

/**
 * _strcpy - give values of dest to be src
 * @dest: - save values
 * @src: - save values
 *
 * Return: 0;
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i + 1] = '\0';
return (dest);
}
