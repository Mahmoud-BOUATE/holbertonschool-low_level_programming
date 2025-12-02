#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sum_dlistint -  function that ret the sum of the data (n) of alinked list.
 * @head: pointer to pointeur to first node
 * Return: return the sul of all the data
 */
int sum_dlistint(dlistint_t *head)
{
int sum;
dlistint_t *courant;
if (head == NULL)
return (0);
courant = head;
sum = 0;
while (courant != NULL)
{
sum = sum + courant->n;
courant = courant->next;
}
return (sum);
}
