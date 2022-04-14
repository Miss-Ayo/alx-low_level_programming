/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: array
 * @size: size
 * @action: pointer to function
*/

#include <stddef.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
(*action)(array[i]);
}
}
