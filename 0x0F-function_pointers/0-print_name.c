/**
 * print_name - prints a name
 * @name:name to print
 * @f: a function pointer
 * Return: void
 */

#include "main.h"

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
