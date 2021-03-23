#include "lists.h"
/**
* get_nodeint_at_index - return index of last node.
*
* @head: list pionter.
* @index: unsigned int.
*
* Return: Always 0.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i, j;
temp = head;
for (j = 0; head != NULL; j++)
head = head->next;
if (index > j)
return (NULL);
for (i = 0; i < index; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
return (temp);
}
