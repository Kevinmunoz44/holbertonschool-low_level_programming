#include "main.h"

/**
 * str_concat - concatenate two string
 * @s1: - save values
 * @s2: - save values
 *
 *Return: 0;
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, l = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (; i < s1[i]; )
{
i++;
}
for (; j < s2[j];)
{
j++;
}
l = i + j;
s = malloc((sizeof(char) * l) +1);
if (s == NULL)
return (NULL);
2 : 14
j = 0;
for (; k < l;)
{
if (k <= i)
s[k] = s1[k];
if (k >= i)
{
s[k] = s2[j];
j++;
}
k++;
}
s[k] = '\0';
return (s);
}
