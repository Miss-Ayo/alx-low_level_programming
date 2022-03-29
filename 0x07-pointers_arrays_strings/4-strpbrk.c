/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: the string
 * @accept: the searching string
 * Return: a string
*/

#include "main.h"

char *_strpbrk(char *s, char *accept)
{
unsigned int var1, var2;

for (var1 = 0; *(s + var1); var1++)
{
for (var2 = 0; *(accept + var2); var2++)
{
if (*(s + var1) == *(accept + var2))
break;
}
if (*(accept + var2) != '\0')
return (s + var1);
}
return (0);
}
