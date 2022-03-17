/**
 * print_numbers - print number from 0 to 9
 * Return: void
 */

#include "main.h"

void print_numbers(void)
{
int i;

i = '0';
while (i <= '9')
{
_putchar(i);
i++;
}
_putchar('\n');
}
