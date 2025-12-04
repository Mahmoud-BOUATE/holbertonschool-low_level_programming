#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table array
 * @key: the key to hash
 * @size: size of the hash table array
 *
 * Return: index where the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash;

if (!key || size == 0)
return (0);
hash = hash_djb2(key);
return (hash % size);
}
