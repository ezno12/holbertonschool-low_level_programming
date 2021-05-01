#include "lists.h"
/**
 * add_dnodeint - add new node to the list.
 *
 * @head: pionter of the first node.
 * @n: int, node data.
 *
 * Return: pionter to new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
newNode = malloc(sizeof(dlistint_t));
newNode->n = n;
newNode->next = *head;
newNode->prev = NULL;
if (*head != NULL)
(*head)->prev = newNode
*head = newNode;
return (newNode);
}
