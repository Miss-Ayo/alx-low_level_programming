/**
 * _square - evaluate from 1 to n
 * @a: a equal to n
 * @b: itinerate 1 to the number n
 *
 * Return: the square  root
 */

int _square(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);
return (_square(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: the integer
 *
 * Return: recursive square root
 */

#include "main.h"

int _sqrt_recursion(int n)
{
return (_square(n, 1));
}
