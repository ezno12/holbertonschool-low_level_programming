#include "lists.h"
#include <stdio.h>
/**
* print_listint -print elements of list
*
* @h: head of list.
*
* Return: lenth of list.
*/
size_t print_listint(const listint_t *h)
{
const listint_t *temp;
size_t i = 0;
temp = h;
while (temp != NULL)
{
printf("%i\n", temp->i);
temp = temp->next;
i++;
}
return (i);
}
