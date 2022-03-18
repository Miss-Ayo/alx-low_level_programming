#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: the number of space
 * Return: void
 */

void print_diagonal(int n)
{
int i = 1;
int j = 1;

if (n <= 0)
{
_putchar('\n');
}
else
{
while (i <= n)
{
if (i > 1)
{
while (j <= n - 1)
{
_putchar(' ');
j++;
}
}
_putchar('\\');
_putchar('\n');
i++;
}
_putchar('\n');
}
}
