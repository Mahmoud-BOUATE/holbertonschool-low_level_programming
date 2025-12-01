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

void free_list(list_t *head)
{
while (head->next == NULL)
{
    free(head);
}
}