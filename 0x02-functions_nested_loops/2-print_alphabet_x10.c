/**
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * Return: 0 successfully
 */

#include "main.h"

void print_alphabet_x10(void)
{
char character = 'a';
int i = 1;

while (i <= 10) 
{
while (character <= 'z')
{
putchar(character);
character++;
}
putchar('\n');
i++;
}
}
