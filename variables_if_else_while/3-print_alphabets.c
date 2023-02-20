#include <stdio.h>

/**
 * main - print alphabet in lowercase and uppercase
 *
 *
 * Return: 0;
 */
int main(void)
{
char lowercase, uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
