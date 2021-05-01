#include "lists.h"

/**
 * free_dlistint - free double linked list.
 *
 * @head: pionter to first node.
 *
 * Return: Void.
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *next, *current;
current = head;
while ( head != NULL)
{
next = current->next;
free(current);
current = next;
}
}
