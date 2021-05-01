#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth of the list.
 *
 * @head: pointer to first node.
 * @index: int
 *
 * Return: nth node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
for (i = 0; index != NULL && head->next; i++)
{
head = head->next;
}
if (i  < index)
return (NULL);
return (head);
}
