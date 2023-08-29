#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer to add to the new node.
 * Return: A pointer to the new head of the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        perror("Memory allocation error");
        return (NULL);
    }

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}

