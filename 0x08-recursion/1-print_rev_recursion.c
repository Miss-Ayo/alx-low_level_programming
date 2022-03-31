/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: the string to reverse
 *
 * Return: a void
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
