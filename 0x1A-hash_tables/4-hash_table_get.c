#include "hash_tables.h"
/**
 * hash_table_get - function retrive associated with key.
 *
 * @ht: hash table.
 * @key: key of hash table
 *
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned int index;
if (ht == NULL || key == NULL || strlen(key) == 0)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
if (node == NULL)
return (NULL);
while (node != NULL)
{
if (strcmp(key, node->key) == 0)
{
return (node->value);
}
node = node->next;
}
return (NULL);
}
