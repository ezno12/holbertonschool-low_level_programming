#include "lists.h"
/**
* free_listint2 - free linked list/set null to head.
*
* @head: list pionter.
*
* Return: void (success).
*/
void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head == NULL)
return;
while (*head != NULL)
{
tmp = *head;
*head = tmp->next;
free(tmp);
}
*head = NULL;
}
