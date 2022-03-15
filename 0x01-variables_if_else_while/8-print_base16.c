/**
 * main - the numbers of base 16 in lowercase
 * Return: 0 successfully
 */

#include <stdio.h>

int main(void)
{
int A = '0';

while (A <= '9')
{
putchar(A);
A++;
}
A = 'a';
while (A <= 'f')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
