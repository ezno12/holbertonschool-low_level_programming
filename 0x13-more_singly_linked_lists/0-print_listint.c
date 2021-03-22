#include "lists.h"
/**
* print_listint -print elements of list
*
* @h: head of list.
*
* Return: lenth of list.
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
