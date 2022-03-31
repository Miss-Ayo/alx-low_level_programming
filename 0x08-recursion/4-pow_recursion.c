/**
 * _pow_recursion - raise x to the power of y
 * @x: Number Integer
 * @y: Power of x
 *
 * Return: the power
 */

#include "main.h"

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
