/**
 * factorial - factorial of n
 * @n: the src integer
 *
 * Return: the factorial
 */

#include "main.h"

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
