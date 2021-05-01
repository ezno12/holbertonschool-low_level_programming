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
while (index != NULL && head->next)
{
head = head->next;
index -= 1;
}
if (i < index)
return (NULL);
return (head);
}
