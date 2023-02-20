#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print the values of n
* positive, negative and zero
*
* Return: 0;
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%dis positive\n");
};
else if (n < 0)
{
printf("%dis negative\n");
};
else
{
pintf("%dis zero\n")
};
return (0);
};
