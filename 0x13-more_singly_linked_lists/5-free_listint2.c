#include "lists.h"

/**
 * free_listint2 - Function that frees the list and make the head = null
 * @head: A pointer to the listint_t list head.
 */

void free_listint2(listint_t **head)
{
	listint_t *free_node;
	listint_t *current_node;

	if (head != NULL)
	{
		current_node = *head;
		while (current_node != NULL)
		{
			free_node = current_node;
			current_node = current_node->next;
			free(free_node);
		}
		*head = NULL;
	}
}

