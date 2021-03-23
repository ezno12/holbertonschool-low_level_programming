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
unsigned int len = 0, i;
listint_t *temp;
temp = head;
while (head != NULL)
{
head = head->next;
len++;
}
if (len < index)
return (NULL);
for (i = 1; i < len - index + 1; i++)
{
if (temp == NULL)
return (NULL);
temp = temp->next;
}
return (temp);
}
