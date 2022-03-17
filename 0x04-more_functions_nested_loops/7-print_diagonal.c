#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: n is the number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
int i = 1;
if (n == 0 || n < 0)
{
_putchar('\n');
}
else
{
while ( i <= n)
{
_putchar('\\');
_putchar('\n');
i++;
}
_putchar('\n');
}
}
