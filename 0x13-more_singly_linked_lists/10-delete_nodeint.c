#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (0-based index).
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
        return (-1);

    listint_t *temp, *current = *head;

    if (index == 0)
    {
        *head = (*head)->next;
        free(current);
        return (1);
    }

    for (unsigned int i = 0; i < index - 1; i++)
    {
        if (current == NULL)
            return (-1);
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

