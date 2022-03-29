/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a string
 */

#include "main.h"

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else
s++;
}
if (*s == c)
return (s);
else
return (0);
}