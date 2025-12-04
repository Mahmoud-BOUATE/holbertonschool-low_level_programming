#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table of the given size
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;
hash_node_t **array;

if (size == 0)
return (NULL);

ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
return (NULL);

array = calloc(size, sizeof(hash_node_t *));
if (array == NULL)
{
free(ht);
return (NULL);
}
ht->size = size;
ht->array = array;
return (ht);
}

