#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_node_end - function that add a new  node at the end of the liste
 * @head: pointer to pointeur to first node
 * @str: string that contain caractère the stock in the chaine
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *new_node ,*courant;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
while (str[len] != '\0')
len++;
new_node->len = len;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}
courant = *head;
while (courant->next != NULL)
courant = courant->next;

courant->next = new_node;

return (new_node);
}
