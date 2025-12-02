#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dlistint - function that free
 * @head: pointer to pointeur to first node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int len;
dlistint_t *courant;
if (head == NULL)
return (NULL);
courant = head;
len = 0;
while (courant != NULL)
{
courant = courant->next;
len++;
if (index == len)
return (courant);

if (courant == NULL)
return (NULL);
}

return (NULL);
}