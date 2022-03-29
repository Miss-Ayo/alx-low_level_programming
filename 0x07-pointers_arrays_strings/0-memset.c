/**
 * _memset -  fills memory with a constant byte
 * 
 * @s: pointer to the memory
 * @b: constant byte
 * @n: first byte of the memory
 *  
 * Return: a pointer to the memory s
 */

#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
unsigned int var = 0;

while (var < n)
{
*(s + var) = b;
var++;
}
return (s);
}