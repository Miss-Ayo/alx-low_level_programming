/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string to print
 * 
 * Return: a void
 */

#include "main.h"

void _puts_recursion(char *s)
{
if (*s != 0)
{
_putchar(*s);
_puts_recursion(s + 1);
}
_putchar('\n');
return;
}
