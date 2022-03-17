/**
 * islower - checks for lowercase character
 * @c: the character to be checked
 * Return: 1 if c is lowercase and 0 otherwise
 */

#include "main.h"

int _islower(int c)
{
if (c >= 97 && c <= 122 )
return (1);
else
return (0);

}
