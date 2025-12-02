#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * dlistint_len - function that returns the number of elements of the chain
 * @h: pointer to first node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t len;
len = 0;
if (h->next == NULL)
return (len);
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
