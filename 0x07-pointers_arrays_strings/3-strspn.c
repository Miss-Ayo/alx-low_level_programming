/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the dest string
 * Return: a string
 */

#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
unsigned int var1, var2;

for (var2 = 0; *(s + var2); var2++)
{
for (var1 = 0; *(accept + var1); var1++)
{
if (*(s + var2) == *(accept + var1))
break;
}
if (*(accept + var1) == '\0')
break;
}
return (var2);
}
