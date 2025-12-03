#include "lists.h"
#include <stdlib.h>

/**
 * insert_at_beginning - insère un nouveau nœud au début de la liste
 * @h: pointeur vers le pointeur du head
 * @n: valeur à mettre dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
dlistint_t *insert_at_beginning(dlistint_t **h, int n)
{
dlistint_t *new_node, *courant;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *h;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;

courant = *h;
while (courant != NULL)
{
    if (courant->next == idx)
}
return (new_node);


}
