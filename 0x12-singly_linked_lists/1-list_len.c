#include <stdlib.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: an element of the list
 * Return: number of element in the list
 */

size_t list_len(const list_t *h)
{

}