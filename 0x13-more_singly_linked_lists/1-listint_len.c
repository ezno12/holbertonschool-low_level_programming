#include "lists.h"
/**
* listint_len - return numb of elemnt int list.
*
* @h: list pionter.
*
* Return: number of elemnt.
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0; /* counter of elemnt*/
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
