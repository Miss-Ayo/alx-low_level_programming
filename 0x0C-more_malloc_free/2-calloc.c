#include "main.h"

/**
* *_memset - fill memory with a constant byte
* @string: varible
* @memb: integer
* @size: number of byte
*
* Return: pointer
*/

char *_memset(char *string, int memb, unsigned int size)
{
unsigned int i;

for (i = 0; i < size; i++)
{
*(string + i) = memb;
}
return (string);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmenb: variable
 * @size: number of byte
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *string = malloc(size * nmemb);

if (nmemb == 0 || size == 0)
return (NULL);
if (string == NULL)
return (NULL);
_memset(string, 0, (size * nmemb));
return (string);
}
