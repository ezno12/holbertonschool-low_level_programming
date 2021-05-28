#include "hash_tables.h"
/**
 * key_index - check index of a key in hash table.
 * 
 * @key: pionter, char, data table.
 * @size: size of hash table.
 *
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash, index;

hash = hash_djb2(key);
index = hash % size;

return (index);
}