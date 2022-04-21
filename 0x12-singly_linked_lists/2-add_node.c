#include "lists.h"

/**
 * addd_node - adds a new node at the beginning of a list
 * @head: head of a list
 * @str: element of a list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nodes = malloc(sizeof(list_t));
char *nodes_str = strdup(str);
unsigned int nodes_len = 0;

if (nodes == NULL)
return (NULL);
if (nodes_str == NULL)
{
free(nodes);
return (NULL);
}
while (nodes_str[nodes_len] != '\0')
nodes_len++;
nodes->str = nodes_str;
nodes->len = nodes_len;
nodes->next = *head;
*head = nodes;
return (nodes);
}
