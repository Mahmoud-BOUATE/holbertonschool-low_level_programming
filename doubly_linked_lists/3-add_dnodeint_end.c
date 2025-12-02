#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_dnodeint_end - function that add node at the beginning of a dlistint_t list
 * @head: pointer to pointeur to first node
 * @n: donnée
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *add_node;
dlistint_t *courant;
add_node = malloc(sizeof(dlistint_t));
if (add_node == NULL)
return (NULL);
if (*head == NULL)
{
*head = add_node;
return (add_node);
}
courant = *head;
while (courant->next != NULL)
courant = courant->next;
courant->next = add_node;
add_node->n = n;
add_node->next = NULL;
add_node->prev = *head;
return (add_node);
}
