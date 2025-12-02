#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *get_dnodeint_at_index - function that returns the nth node of linked list.
 * @head: pointer to pointeur to first node
 * @index: index of the list
 * Return: return the index of the node
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
if (index == len)
return (courant);
len++;
courant = courant->next;
if (courant == NULL)
return (NULL);
}

return (NULL);
}
