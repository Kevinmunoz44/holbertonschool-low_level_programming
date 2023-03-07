#include <stdio.h>

/**
 * main - print the numbers of arguments
 * @argc: - count of array
 * @argv: - array
 * Return: 0;
 */
int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc);
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
}
return (0);
}
