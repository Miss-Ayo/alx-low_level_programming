/**
 * pre_print - print alphabet firstly in lowercase
 * print_alphabet_x10 - print the alphabet in lowercase 10 times
 * Return: 0 successfully
 */

#include "main.h"

void pre_print(void)
{
char character = 'a';
while (character <= 'z')
{
putchar(character);
character++;
}
putchar('\n');
}

void print_alphabet_x10(void)
{
int i = 1;

while (i <= 10)
{
pre_print();
i++;
}
}
