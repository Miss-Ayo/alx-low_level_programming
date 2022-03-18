#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: n is the number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
int i = 1;
int j = 0;

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
while (j <= (n - 1))
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
