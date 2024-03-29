#include "lists.h"

/**
* add_node - add new node at the beginning.
*
* @head: pionter to list.
* @str: pionter.
*
* Return: new element adress.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int sum = 0;
new = malloc(sizeof(list_t));
if (new == NULL || str == NULL)
return (NULL);
for (sum = 0; str[sum]; sum++)
;
new->str = strdup(str);
new->len = sum;
new->next = NULL;
if (*head != NULL)
new->next = *head;
*head = new;
return (new);
}
