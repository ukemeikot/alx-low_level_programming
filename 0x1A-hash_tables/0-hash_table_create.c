#include "hash_tables.h"
/**
  *hash_table_create - crates a hash table
  *@size: the size of the hash table
  *Return: NULL if something went wrong and pointer to
  *the created table otherwise
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int a;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **)calloc(ht->size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		ht->array[a] = NULL;
	return (ht);
}
