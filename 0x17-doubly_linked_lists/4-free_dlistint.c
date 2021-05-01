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
dlistint_t *next;
while (head)
{
next = head
head = head->next;
free(next);
}
}
