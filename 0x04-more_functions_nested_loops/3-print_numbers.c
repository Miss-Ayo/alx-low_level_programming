/**
 * print_numners - print number from 0 to 9
 * Return: 0
 */

#include "main.h"

void print_numbers(void)
{
int i = '0';

while (i <= '9') {
_putchar(i);
i++;
}
_putchar('\n');
}
