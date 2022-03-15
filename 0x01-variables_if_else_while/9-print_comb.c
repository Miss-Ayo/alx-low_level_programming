/**
 * main - print comb
 * Return: 0 successfully
 */

#include <stdio.h>

int main(void)
{
int A = '0';
while (A <= '9')
{
putchar(A);
if (A != '9')
{
putchar(',');
putchar(' ');
}
A++;
}
putchar('\n');
return (0);
}
