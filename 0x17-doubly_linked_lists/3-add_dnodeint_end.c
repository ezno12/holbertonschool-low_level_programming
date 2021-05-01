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
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
if (*head == NULL)
{
newNode->n = n;
newNode->next = NULL;
newNode->prev = NULL;
*head = newNode;
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
newNode->prev = temp;
newNode->n = n;
newNode->next = NULL;
return (newNode);
}
