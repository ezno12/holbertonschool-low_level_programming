#include "lists.h"

/**
* reverse_listint - reverse linked list.
*
* @head: pionter to list.
*
* Return: list (success).
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next;
if (head == NULL || *head == NULL)
return (NULL);
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
