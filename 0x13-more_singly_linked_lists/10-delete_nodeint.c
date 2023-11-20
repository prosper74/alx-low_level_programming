#include "lists.h"

/**
* delete_nodeint_at_index - Function that deletes the node at index
* of a listint_t linked list.
* @head: A pointer to the listint_t list head.
* @index: The index of the node that should be deleted. Index starts at 0
*
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node = *head;
listint_t *next_node;
unsigned int count = 0;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	*head = current_node->next;
	free(current_node);
	return (1);
}

while (current_node != NULL && count < index - 1)
{
	current_node = current_node->next;
	count++;
}

if (current_node == NULL || current_node->next == NULL)
	return (-1);

next_node = current_node->next->next;
free(current_node->next);
current_node->next = next_node;

return (1);
}

