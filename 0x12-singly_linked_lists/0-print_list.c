#include "lists.h"
/**
* print_list - print element of list_t
*
*@h : pionter.
*
* Return: nodes number
*/
size_t print_list(const list_t *h)
{
int i;
size_t len = 0;
/* declare and initialize an iterating pointer for looping through the list */
const list_t *head = h;
i = 0;
while (head != NULL)
{
/* print data corresponding to current node */
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", head->len, head->str);
head = head->next;
len++;
i++;
}
return (len);
}
