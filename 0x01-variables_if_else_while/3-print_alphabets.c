/**
 * main - print alphabet
 * Return: 0 successfully
 */

#include <stdio.h>

int main(void)
{
char X = 'a';
char Y = 'A';

while (X <= 'z')
{
putchar(X);
X++;
}
while (Y <= 'Z')
{
putchar(Y);
Y++;
}
putchar('\n');
return (0);
}
