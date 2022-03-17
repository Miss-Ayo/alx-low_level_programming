/**
 * print_sign - print the a number's sign
 * @n: the number to be checked
 * Return: 1 if n > 0, 0 if n == 0 and -1 if n < 0
 */

#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
