#include "lists.h"
/**
* delete_nodeint_at_index - delet indexed node.
*
* @head: pionter to list.
* @index: unsigned int.
*
* Return: Always 0.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *remove;
unsigned int i;
i = 0;
temp = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(temp);
}
else
{
while (i < index - 1)
{
temp = temp->next;
if (temp == NULL)
return (-1);
i++;
}
remove = temp;
remove = remove->next;
temp->next = remove->next;
free(remove);
}
return (1);
}
