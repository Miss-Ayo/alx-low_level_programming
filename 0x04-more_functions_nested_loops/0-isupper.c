/**
 * _isupper - check uppercas character
 * @c: the number to check
 * Return: 1 if c is uppercase otherwise 0
 */

#include "main.h"

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
