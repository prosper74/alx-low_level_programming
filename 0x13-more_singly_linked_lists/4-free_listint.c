#include "lists.h"

/**
* free_listint - Function that frees the list
* @head: A pointer to the listint_t list head.
*/

void free_listint(listint_t *head)
{
listint_t *current_node = head;
listint_t *next_node;

while (current_node != NULL)
{
	next_node = current_node->next;

	free(current_node);
	current_node = next_node;
}
}

