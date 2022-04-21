#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: - element of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)");
else if (h->str != NULL)
printf("[%u] %s", h->len, h->str);
count++;
h = h->next;
}
return (count);
}
