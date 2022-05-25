#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - It adds a new role at the beginning of a linked list
 * @head: The double pointer of the list_t list
 * @str: The new string to add to the node
 *
 * Return: This is the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
int lt;
int counter = 0;
list_t *new;

if (head == NULL)
{
return  (NULL);
}

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}

for (lt = 0; str[lt] != '\0'; lt++)
{
counter++;
}

new->len = lt;
new->str = strdup(str);
new->next = *head;

*head = new;

return (new);
}
