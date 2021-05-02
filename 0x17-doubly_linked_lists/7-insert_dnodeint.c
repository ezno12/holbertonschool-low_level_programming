#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a certain position.
 *
 * @h: pionter to first node.
 * @idx: the index for new node position.
 * @n: int
 *
 * Return: new node adress.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *current = *h;
dlistint_t *temp;
unsigned int i = 0;
unsigned int j = len_node(h);
if (idx == 0)
add_dnodeint(h, n);
return (add_dnodeint(h, n));

while (current)
{
if (i == idx - 1)
break;
else if (i < idx - 1 && current == NULL)
return (NULL);
current = current->next;
i++;
}
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);

if (j == idx)
{
return (add_dnodeint_end(h, n));
}
else if (j < idx)
return (NULL);
current->next->prev = temp;
temp->next = current->next;
current->next = temp;
temp->prev = current;
temp->n = n;
return (current);
}
/**
 * len_node - lenth of list
 *
 * @node:list
 *
 * Return:unsigned int
 */
unsigned int len_node(dlistint_t **head)
{
	unsigned int j = 0;
	dlistint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		j += 1;
		temp = temp->next;
	}
	return (j);
}
