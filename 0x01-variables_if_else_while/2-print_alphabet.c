/**
 * main - print alphabet in lowercase
 * Return: 0 successfully
 */

#include <stdio.h>

int main(void)
{
char A = 'a';
 
while (A <= 'z')
{
putchar(A);
A++;
}
putchar('\n');
return (0);
}
