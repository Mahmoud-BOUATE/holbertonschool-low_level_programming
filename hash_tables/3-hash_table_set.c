#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key (cannot be empty)
 * @value: the value (will be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current;
if (!ht || !key || strlen(key) == 0 || !value)
return (0);
index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];
while (current)
{
if (strcmp(current->key, key) == 0)
{

free(current->value);
current->value = strdup(value);
if (!current->value)
return (0);
return (1);
}
current = current->next;
}
new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (0);

new_node->key = strdup(key);
if (!new_node->key)
{
free(new_node);
return (0);
}
new_node->value = strdup(value);
if (!new_node->value)
{
free(new_node->key);
free(new_node);
return (0);
}
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
