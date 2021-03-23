#include "lists.h"
/**
* insert_nodeint_at_index - add node in given pos.
*
* @head: double pionter.
* @idx: unsigned int.
* @n: int.
*
* Return: Always 0.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
listint_t *new;
unsigned int i;
current = *head;
if (head == NULL)
return (NULL);
i = 0;
if (idx != 0)
{
for (; i < idx - 1 && current != NULL; i++)
current = current->next;
}
if (idx > i + 1)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
if (idx == i)
{
new->next = NULL;
current->next = new;
return (new);
}
new->next = current->next;
current->next = new;
return (new);
}
