/**
 * _memcpy - copies memory area
 * @dest: pointer to memory area
 * @src: pointer initial
 * @n: bytes from memory
 * Return: a pointer to dest
 */

#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int var = 0;

while (var < n)
{
*(dest + var) = *(src + var);
var++;
}
return (dest);
}
