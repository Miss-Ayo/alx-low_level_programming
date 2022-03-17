/**
 * main - prins the alpahabet in lowercase
 * Description: print alphabet in lowercase, followed
 * by a newline
 * Return: 0 successfully
 */

#include "main.h"


void print_alphabet(void)
{
char character = 'a';

while (character <= 'z')
{
putchar(character);
character++;
}
putchar('\n');
}
