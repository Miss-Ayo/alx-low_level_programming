/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: the string
 * @accept: the searching string
 * Return: a string
*/

#include "main.h"

char *_strpbrk(char *s, char *accept)
{
unsigned int var1 = 0;
unsigned int var2 = 0;

while (*(s + var1))
{
while (*(accept + var2))
{
if (*(s + var1) == *(accept + var2))
break;
var2++;
}
if (*(accept + var2) != '\0')
return (s + var1);
var1++;
}
return (0);
}
