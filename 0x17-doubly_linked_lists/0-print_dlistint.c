#include "lists.h"
/**
 * print_dlistint - print the element of double linked list.
 *
 * @h: head of first element in node.
 *
 * Return: number of node.
*/
size_t print_dlistint(const dlistint_t *h)
{
dlistint_t temp = h;
size_t i = 0;
while (temp != NULL)
{
printf("%d\n", temp->data);
temp = temp->next;
i += 1;
}
return (i);
}
