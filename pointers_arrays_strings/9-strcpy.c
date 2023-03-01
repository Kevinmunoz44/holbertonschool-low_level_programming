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
int index = 0;
while (src[index])
{
dest[index] = src[index];
index++;
}
return (dest);
}
