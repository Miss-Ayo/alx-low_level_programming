/**
 * *malloc_checked - allocates memory using malloc
 * @b: src value
 * Return: pointer to the allocated memory
 */

#include "main.h"

void *malloc_checked(unsigned int b)
{
void *string = malloc(b);

if (string == NULL)
exit(98);
return (string);
}
