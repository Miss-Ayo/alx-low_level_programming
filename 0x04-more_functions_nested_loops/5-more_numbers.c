#include "main.h"

/**
 * pre_more - prints numbers from 0 to 14
 * Return: void
 */

void pre_more(void)
{
char *str = "01234567891011121314";
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
int j  = 1;

while (j <= 10)
{
pre_more();
j++;
}
}
