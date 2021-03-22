#include "lists.h"
/**
* pop_listint - delet head of list.
*
* @head: pionter to list.
*
* Return: int (succes).
*/
int pop_listint(listint_t **head)
{
size_t save;
listint_t *tmp;
if (*head == NULL || head == NULL)
return (0);
save = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (save);
}
