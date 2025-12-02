#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_dnodeint - function that add node at the beginning of a dlistint_t list
 * @head: pointer to pointeur to first node
 * @n: donnée
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *add_node;
add_node = malloc(sizeof(dlistint_t));
if (add_node == NULL)
return (NULL);

add_node->n = n;
add_node->prev = NULL;
add_node->next = *head;

if (*head != NULL)
(*head)->prev = add_node;

*head = add_node;
return (add_node);
}

