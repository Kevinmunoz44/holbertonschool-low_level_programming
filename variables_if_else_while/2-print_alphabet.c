#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print with function putchar
 *
 *
 * Return: 0;
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
