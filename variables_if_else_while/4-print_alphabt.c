#include <stdio.h>

/**
 * main - print the alpahbet in lowercase not q and e
 *
 *
 * Return: 0;
 */
int main(void)
{
char lowercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase != 'q' && lowercase != 'e')
{
putchar('\n');
putchar(lowercase);
}
}
return (0);
}
