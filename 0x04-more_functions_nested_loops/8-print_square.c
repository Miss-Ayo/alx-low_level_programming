#include "main.h"

/**
 * first_line - print a line with #
 * @size: size of my line
 * Return: 0
 */

void first_line(int size)
{
int  i = 1;

while (i <= size)
{
_putchar('#');
i++;
}
_putchar('\n');
}

/**
 * print_square - print a square with #
 * @size: size of my square
 * Return: 0
 */

void print_square(int size)
{
int j = 1;

if (size < 0 || size == 0)
{
_putchar('\n');
}
else
{
while (j <= size)
{
first_line(size);
j++;
}
}
}
