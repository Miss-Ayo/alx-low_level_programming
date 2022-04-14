/**
 * print_name - prints a name
 *
 * @name:name to print
 * @f: a function pointer
 */

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        (*f)(name);
}