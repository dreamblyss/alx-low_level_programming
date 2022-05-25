#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This is a function that adds a new node
 * @head: the input double pointer to the list_t list
 * @str: the string to inout in the new node
 *
 * Return: the address of the new element or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp = *head;
unsigned int lt = 0;

while (str[lt])
{
lt++;
}

new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}

new->str = strdup(str);
new->len = lt;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
{
temp = temp->next;
}
temp->next = new;

return (new);

}
