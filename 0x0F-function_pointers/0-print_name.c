/**
 * print_name - function that prints a name
 *
 * @name: the name
 * @f: the function pointer
*/

#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
(*f)(name);
}
