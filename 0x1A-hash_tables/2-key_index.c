#include "hash_tables.h"
/**
  *key_index - generates a key index.
  *@key: the key
  *@size: the size of the hash table
  *Return: the index at which the key should be stored in the array of the hash
  *table.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
