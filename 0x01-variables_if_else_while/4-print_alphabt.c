/**
 * main - print some letters
 * Return: 0 successfully
 */

#include <stdio.h>

int main(void)
{
char A = 'a';

while (A <= 'z')
{
if (A != 'q' && A != 'e')
{
putchar(A);
}
A++;
}
putchar('\n');
return (0);
}
