#include "main.h"
#include <stdlib.h>
/**
 * *create_array - initializes wiht specific char
 * @size: - size of array
 * @c: - save values
 * Return: 0;
 */
char *create_array(unsigned int size, char c)
{
unsigned int k;
char *ptr;
if (size == 0)
{
return (NULL);
}
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (k = 0; k < size; k++)
{
ptr[k] = c;
}
return (ptr);
}
