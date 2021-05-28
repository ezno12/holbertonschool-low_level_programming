#include "hash_tables.h"

/**
 * hash_table_create - Create a Hash Table
 *
 * @size: The size of table
 *
 * Return: Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(table->array) * size);
	if (table->array == NULL)
		return (NULL);
	return (table);
}
