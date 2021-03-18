#include "lists.h"
/**
* free_list - frees  list.
*
* @head: pionter to list.
*
* Return: void (succes).
*/
void free_list(list_t *head)
{
list_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
