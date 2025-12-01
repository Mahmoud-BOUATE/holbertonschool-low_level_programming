#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
size_t list;
list = 0;
while (h != NULL)
{
if (h == NULL)
return(list);
else
h = h->next;
list ++;
}
return(list);
}