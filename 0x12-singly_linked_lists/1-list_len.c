#include <stdlib.h>
#include "lists.h"

/**
 * list_len - it returns each number of elements in a linked list
 * @h: pointer of the list_t list
 *
 * Return: numbers of the elements in h
 */
size_t list_len(const list_t *h)
{
size_t pt = 0;

while (h)
{
pt++;
h = h->next;
}
return (pt);
}
