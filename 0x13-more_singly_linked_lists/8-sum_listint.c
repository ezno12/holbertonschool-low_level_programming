#include "lists.h"
/**
* sum_listint - return the sum of all the data in list.
*
* @head: list pionter.
*
* Return: Always 0.
*/
int sum_listint(listint_t *head)
{
listint_t *current;
int sum = 0;
if (!head)
return (0);
current = head;
while (current->next != NULL)
{
sum = sum + current->n;
current = current->next;
}
sum = sum + current->n;
return (sum);
}
