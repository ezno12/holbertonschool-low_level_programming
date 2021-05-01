#include "lists.h"

/**
 * add_dnodeint_end - add new noode at the end of the list.
 *
 * @head: pionter to first node.
 * @n: int, data of the node.
 *
 * Return: new node.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode;
dlistint_t *temp = *head;
if (head == NULL)
return (NULL);
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (*head == NULL)
{
newNode->next = *head;
newNode->prev = NULL;
*head = newNode;
return (newNode);
}
while (temp->next != NULL)
{
temp = temp->next;
}
newNode->prev = temp;
newNode->next = NULL;
temp->next = newNode;
return (newNode);
}
