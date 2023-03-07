#include "main.h"

/**
 * _strncpy - prints the values of one pointer and sends it to the other
 * @dest: - save values
 * @src: - save values
 * @n: - number of characters
 * Return: 0;
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
