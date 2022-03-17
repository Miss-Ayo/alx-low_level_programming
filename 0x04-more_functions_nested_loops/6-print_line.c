/**
 * print_line - draw a line
 * @n: number of times the character _ should be printed
 * Return: 0
 */

#include "main.h"

void print_line(int n)
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
_putchar('_');
i++;
}
_putchar('\n');
}
}
