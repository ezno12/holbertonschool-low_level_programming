#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  *
  * @h: pointer to a pointer head
  * @idx: the index of the node
  * @n: the number of nodes
  *
  * Return: NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode, *temp;
unsigned int i = 0;

if (h == NULL)
return (NULL);
newNode = malloc(sizeof(dlistint_t));
newNode->n = n;
newNode->next = NULL;
newNode->prev = NULL;
if (newNode == NULL)
return (NULL);
if (idx == 0)
{
newNode->next = *h;
*h = newNode;
return (newNode);
}
temp = *h;
while (temp != NULL)
{
if (i + 1 == idx)
{
newNode->next = temp->next;
temp->next = newNode;
return (newNode);
}
temp = temp->next;
i++;
}
free(newNode);
return (NULL);
}
