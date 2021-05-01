#include "lists.h"
/**
 * dlistint_len - find lenth of double linked list.
 *
 * @h: first elemnt in list.
 *
 * Return: lenth of list.
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
while (h != NULL)
{
h = h->next;
len += 1;
}
return (len);
}
