#include "main.h"
#include <ctype.h>
/**
 * _islower - print letter in lowercase 
 * and return if lowercase 1 case other 0
 *
 * Return: 0;
 */
int _islower(int c)
{
int var1 = 'A';
int var2 = 'b';
if (islower(var1))
printf("\nis a character lowercase%d", var1);
else 
printf("\nnot is character lowercase%d", var1);
if (islower(var2))
printf("\nis a character lowercase%d", var2);
else
printf("\nnot is character lowercase%d", var2);
}
