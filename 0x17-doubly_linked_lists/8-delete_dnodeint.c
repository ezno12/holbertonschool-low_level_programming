#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at certain position.
 *
 * @head: pionter to pionter to first node.
 * @index: unsigned int.
 *
 * Return: 1 or -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp;
unsigned int i = 0;
if (*head == NULL || head == NULL)
return (-1);
temp = *head;
while (temp != NULL)
{
if (index == i + 1)
{
deleteNode = temp->next;
temp->next = deleteNode->next;
free(deleteNode);
return (1);
}
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}
temp = temp->next;
i++;
}
return (-1);
}
