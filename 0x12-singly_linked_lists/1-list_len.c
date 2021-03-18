#include "lists.h"
/**
* list_len - return num of linked list.
*
* @h : pionter.
*
* Return: number of element.
*/
size_t list_len(const list_t *h)
{
int i = 0;
size_t len = 0;
while (h != NULL)
{
h = h->next;
len++;
i++;
}
return (len);
}
