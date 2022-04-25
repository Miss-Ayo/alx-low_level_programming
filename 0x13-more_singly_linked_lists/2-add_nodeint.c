/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of the list
 * @n: lenght of the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return (NULL);
else
{
newnode->n = n;
newnode->next = *head;
*head = newnode;
}
}
