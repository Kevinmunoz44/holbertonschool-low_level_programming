#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - print the values of n
* positive negative and zero
*
* Return 0;
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive");
};
else if (n < 0)
{
printf("%d is negative\n");
};
else
{
pintf("%d is zero\n")
};
return (0);
};
