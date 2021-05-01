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
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i += 1;
}
return (i);
}
