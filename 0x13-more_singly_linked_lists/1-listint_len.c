/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of a node
 * Return:returns the number of elements in a linked list
 */

#include "lists.h"

size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *node = h;

while (node != NULL)
{
node = node->next;
count++;
}
return (count);
}
