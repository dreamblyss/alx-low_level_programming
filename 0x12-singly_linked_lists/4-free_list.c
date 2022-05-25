#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: list_t list struct to be freed
 *
 * Return: free
 */

void free_list(list_t *head)
{
if (head == NULL)
{
return;
}

if (head->next != NULL)
{
free_list(head->next);
}
free(head->str);
free(head);
}
