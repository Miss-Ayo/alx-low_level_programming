/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of nodes
 * Return: the number of nodes
 */

#include "lists.h"

size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *node = h;

while (node != NULL)
{
printf("%d\n", node->n);
node = node->next;
count++;
}
return (count);
}
