#include "lists.h"

/**
 * sum_dlistint - return summ of all data n.
 *
 * @head: pionter for the first node.
 *
 * Return: sum, int.
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
