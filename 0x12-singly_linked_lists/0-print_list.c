#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count = 0;

if (!h)
return (0);
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
count += 1;
h = h->next;
}
return (count);
}