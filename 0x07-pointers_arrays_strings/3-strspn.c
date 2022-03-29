/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the dest string
 * Return: a string
 */

#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
unsigned int var1 = 0;
unsigned int var2 = 0;

while (*(s + var2))
{
while (*(accept + var1))
{
if (*(s + var2) == *(accept + var1))
break;
var1++;
}
var2++;
if (*(accept + var1) == '\0')
break;
}
return (var2);
}
