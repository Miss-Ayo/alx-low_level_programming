/**
 * print_most_numbers - print numbers from 
 * 0 to 9 except 2 and 4
 * Return: void
 */

#include "main.h"

void print_most_numbers(void)
{
int i = '0';

while (i <= '9')
{
if ( i != '2' && i != '4')
_putchar(i);
i++;
}
putchar('\n');
}
