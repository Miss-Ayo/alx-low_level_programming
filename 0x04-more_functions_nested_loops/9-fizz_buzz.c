#include "main.h"

/**
 * fizz_buzz - print numbers from 1 to 100
 * Return: void
 */

void fizz_buzz(void)
{
int i = 1;

while (i <= 100)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("Fizzbuzz ");
}
else
{
printf("%d ", i);
}
i++;
}
printf("\n");
}
